# CYPM1111 PD FW

[![Build](https://img.shields.io/badge/build-Makefile-blue)](Makefile)
[![Toolchain](https://img.shields.io/badge/toolchain-arm--none--eabi--gcc-informational)](#prerequisites)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](#contributing)

A minimal, ModusToolbox-free firmware build for the Infineon CYPM1111-40LQXI USB-PD controller, built with plain `make` and `arm-none-eabi-gcc`.

## Why

Infineon's official workflow for this chip requires the full ModusToolbox IDE/toolchain. This project provides a lightweight alternative: a hand-written `Makefile` that drives GCC directly against the vendor PDL, CMSIS, and core-lib sources, so you can build, flash, and debug without installing ModusToolbox.

## Contents

- [Prerequisites](#prerequisites)
- [Getting the source](#getting-the-source)
- [Building](#building)
- [Flashing and debugging](#flashing-and-debugging)
- [Contributing](#contributing)
- [License](#license)

## Prerequisites

You need an `arm-none-eabi-gcc` toolchain, Git, and (optionally) `ccache` to speed up rebuilds.

**Debian/Ubuntu**
```bash
apt install arm-none-eabi-gcc git ccache openocd -y
```

**Arch Linux**
```bash
pacman -Syy && pacman -S arm-none-eabi-gcc git ccache openocd
```

**macOS**
```bash
brew install ccache openocd git
```
Then install the [ARM GNU Toolchain](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads) and make sure it's on your `PATH`.

## Getting the source

This repository uses Git submodules for the vendor SDK (CMSIS, PDL, core-lib):

```bash
git clone git@github.com:rmskkn/cypm1111_pd.git
cd cypm1111_pd
git submodule sync && git submodule update --init --recursive
```

## Building

```bash
make
```

The build is parallelized automatically (based on available CPU cores) and produces `build/cypm1111.elf`.

```bash
make clean
```

removes build artifacts.

## Flashing and debugging

### 1. Start OpenOCD

Debugging uses the onboard debugger. Infineon has not upstreamed all the OpenOCD changes it requires, so you'll need `ModusToolboxProgTools`:

- Debian: install directly from [Infineon's software tools portal](https://softwaretools.infineon.com/tools/com.ifx.tb.tool.modustoolboxprogtools).
- Arch-based systems: build it from the [AUR package](https://aur.archlinux.org/modustoolbox-progtools.git) with `makepkg -si`.

With the onboard debugger (J1) and target USB-C (J10) connected, launch OpenOCD:

```bash
/opt/ModusToolboxProgtools-1.6/openocd/bin/openocd \
  -s /opt/ModusToolboxProgtools-1.6/mtb-programmer/scripts \
  -c 'set APP_PATH "/opt/ModusToolboxProgtools-1.6/mtb-programmer"' \
  -c 'set SERIAL_NUM "091509E8021D2400"' \
  -c 'set OOCD_REL_PATH "./../openocd"' \
  -f cyp_dirs.cfg \
  -c 'set TRANSPORT swd' \
  -g \
  -c 'set BAUDRATE "0"' \
  -c 'set RESETTYPE soft' \
  -c 'set TARGET_CONFIG "cpu_pmg1.cfg"' \
  -c 'set PSOC4_USE_ACQUIRE 1' \
  -c 'tcl_port disabled' \
  -f probe_kitprog3.cfg \
  -c 'adapter speed 2000' \
  -d2
```

A successful connection looks like:

```
Info : [psoc4.cpu] Examination succeed
Info : gdb port disabled
Info : starting gdb server for psoc4.cpu on 3333
Info : Listening on port 3333 for gdb connections
```

### 2. Connect with GDB

```bash
arm-none-eabi-gdb ./build/cypm1111.elf -x 'target remote :3333'
```

Inside the GDB session, run `load` to upload the firmware and `c` to start execution:

```
(gdb) load
Loading section .text, size 0x201a lma 0x0
Loading section .copy.table, size 0xe lma 0x201a
Loading section .zero.table, size 0x8 lma 0x2028
Loading section .data, size 0x2c lma 0x2030
Start address 0x000001de, load size 8284
Transfer rate: 14 KB/sec, 2071 bytes/write.
```

## Contributing

Ideas, proposals, and pull requests are welcome. Please open an issue to discuss significant changes before submitting a PR.

## License

No license has been specified yet for this project.
