# Ocarina of Time N64 Randomizer

This repository houses the code and binary patches and original assets necessary to recreate the Ocarina of Time Randomizer that runs directly on the Nintendo 64 console.

The patches are available both in a single massive patch file for applying to a branch of the [decompilation of Ocarina of Time](https://github.com/zeldaret/oot), and separate individual file patches in the same folder structure as the decompilation.
Use commit 1e556e3a3de0a485837a1277d82d765c1be690f7 as the base from decomp for best results currently.

## Setup

Building has only been tested on native Linux. WSL and Docker should work just as well but are untested. macOS may require additional setup not supported here.

### Linux
#### 1. Install build dependencies and clone the repository

Follow the installation instructions on the decompilation readme for these two steps.

After cloning the repository and changing into the new directory checkout the commit the patch file was made against using git again.

```bash
git checkout 1e556e3a3de0a485837a1277d82d765c1be690f7
```

#### 2. Download the patch file

Download [the patch file](https://github.com/flagrama/N64-OoT-Randomizer-Patches/releases/download/v1.0.0/patch) and place it in the `oot` folder.

#### 3. Apply the patch file

Use git to apply the `patch` file.

```bash
git apply ./patch
```

#### 4. Prepare a base ROM

Place a copy of the PAL 1.1 ROM inside the `baseroms/pal-1.1/` folder.

Rename the file to `baserom.z64`, `baserom.n64`, or `baserom.v64`, depending on the original extension.

#### 5. Set up the ROM and build process

Set up and extract everything from your ROM with the following command:

```bash
make setup
```

This downloads some dependencies (from pip), and compiles tools for the build process.
Then it generates a new ROM `baseroms/pal-1.1/baserom-decompressed.z64`.
It will also extract the individual assets from the ROM.

#### 6. Build the ROM

Run make with the compress target to build the ROM.
Make sure your path to the project is not too long, otherwise this process may error.

```bash
make compress
```

If all goes well, a new ROM should be built at `build/randomizer/oot-randomizer-compressed.z64`

## Emulators

This project will not run properly on the Wii Virtual Console emulator at present.
It will also not work properly on graphics plugins other than Angrylion or ParaLLEl-RDP.
Other emulator inaccuracies may also impact your experience.
The only supported emulator is [Ares](https://ares-emu.net/).

## Contributing

Contributions are limited.
There are various factors at work causing this.
If you wish to try and contribute still, start a discussion on the Discord channel.
