from io import TextIOWrapper
from pathlib import Path
from os import walk


def main():
    patch_file_name = "patch"
    patch_path = Path(patch_file_name)
    if not patch_path.is_file():
        print(
            f"File {patch_file_name} not found. Run from the repository root.\ncwd = {Path.cwd()}"
        )
        exit(1)
    clean_previous_patches()
    binaries = split_patches(patch_path)

    if binaries:
        print("")
        print("Copy the following binary files:")
        for binary in binaries:
            print(binary)


def clean_previous_patches():
    skip_dirs = {".git", ".github"}
    clean_suffixes = {".c", ".h", ".patch"}
    root = Path.cwd()

    for dirpath, _, filenames in walk(root, topdown=False):
        path = Path(dirpath)
        if skip_dirs.intersection(path.relative_to(root).parts[:1]):
            continue
        for name in filenames:
            if Path(name).suffix in clean_suffixes:
                (path / name).unlink()
        if path != root and not any(path.iterdir()):
            path.rmdir()


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
                    file_name.parent.mkdir(parents=True, exist_ok=True)
                    file = open(file_name, "w+")
                    f.readline()
                    f.readline()
                    line = f.readline()
                    continue
                elif line.startswith("index"):
                    f.seek(file_offset)
                    file_name.parent.mkdir(parents=True, exist_ok=True)
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
