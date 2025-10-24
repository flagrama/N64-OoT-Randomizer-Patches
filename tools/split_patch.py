from io import TextIOWrapper
from pathlib import Path


def main():
    patch_file_name = "patch"
    patch_path = Path(patch_file_name)
    if not patch_path.is_file():
        print(
            f"File {patch_file_name} not found. Run from the repository root.\ncwd = {Path.cwd()}"
        )
        exit(1)
    binaries = split_patches(patch_path)

    if binaries:
        print("")
        print("Copy the following binary files:")
        for binary in binaries:
            print(binary)


def split_patches(patch_file: Path) -> list[Path]:
    binary_files: list[Path] = []
    with patch_file.open() as f:
        file: TextIOWrapper | None = None
        new_file = False
        file_name: Path = Path()
        file_offset = 0
        last_offset = 0
        line = f.readline()
        while line:
            if line.startswith("diff"):
                file_offset = last_offset
                file_name = Path(line[line.find("b/") + 2 : -1])
                line = f.readline()
                continue
            if line.startswith("\\ No newline at end of file"):
                last_offset = f.tell()
                line = f.readline()
                continue
            if line.startswith("new file") or line.startswith("index"):
                if file:
                    new_file = False
                    file.close()

                if line.startswith("new file"):
                    new_file = True
                    f.readline()
                    temp_line = f.readline()
                    if temp_line.startswith("Binary files"):
                        if not file_name.is_file():
                            binary_files.append(file_name)
                        last_offset = f.tell()
                        line = f.readline()
                        continue
                    file = open(file_name, "w+")
                    f.readline()
                    f.readline()
                    line = f.readline()
                    continue
                elif line.startswith("index"):
                    f.seek(file_offset)
                    file = open(str(file_name) + ".patch", "w+")
                    file.write(f.readline())
                    f.readline()

            if new_file:
                file.write(line[1:])
            else:
                file.write(line)
            last_offset = f.tell()
            line = f.readline()

    print("Finished splitting patch file.")

    return binary_files


if __name__ == "__main__":
    main()
