## Initial PD S1 DRP project skeleton

This project aims to simplify the way of configuring Infineon
project based on S1 DRP instead of native mtb-based way
comming from ModusToolbox.


### Preprequsites
Debian based:
```bash
apt install arm-none-eabi-gcc git \
    ccache openocd \
    arm-none-eabi-gdb
```

Arch AUR:
```bash
pacman -Syy && pacman -S arm-none-eabi-gcc \
    git ccache openocd \
    arm-none-eabi-gdb
```

### Prepare repository
```bash
git clone git@github.com:rmskkn/cypm1111_pd.git
cd cypm1111_pd
git submodule sync && git submodule update --init --recursive
```

### Compilation

```bash
make
```

### Debugging

1. Invoke OpenOCD on builtin onboard debugger on the host;
Unfortunately, Infineon has not published all required changes to upstream openocd.
We need to download ModusToolboxProgTools in https://softwaretools.infineon.com/tools/com.ifx.tb.tool.modustoolboxprogtools
and install it on host. This is only debian package.
For Arch-based systems we need to use https://aur.archlinux.org/modustoolbox-progtools.git and `makepkg -si` to bundle it.

Once you connected your onboard debugger J1 and target USB-C J10, we can invoke OpenOCD:
```bash
/opt/ModusToolboxProgtools-1.6/openocd/bin/openocd -s /opt/ModusToolboxProgtools-1.6/mtb-programmer/scripts -c 'set APP_PATH "/opt/ModusToolboxProgtools-1.6/mtb-programmer"' -c 'set SERIAL_NUM "091509E8021D2400"' -c 'set OOCD_REL_PATH "./../openocd"' -f cyp_dirs.cfg -c 'set TRANSPORT swd' -g -c 'set BAUDRATE "0"' -c 'set RESETTYPE soft' -c 'set TARGET_CONFIG "cpu_pmg1.cfg"' -c 'set PSOC4_USE_ACQUIRE 1' -c 'tcl_port disabled' -f probe_kitprog3.cfg -c 'adapter speed 2000' -d2

```

You will see info listing from openocd:

```bash
Info : [psoc4.cpu] Examination succeed
Info : gdb port disabled
Info : starting gdb server for psoc4.cpu on 3333
Info : Listening on port 3333 for gdb connections

```

2. Run gdb:

```bash
arm-none-eabi-gdb ./build/cypm1111.elf -x 'target remote :3333'
```
Inside the gdb session, use `load` command to upload fw to target and `c` to run the fw.

Example of successful transfer:
```bash
(gdb) load
Loading section .text, size 0x201a lma 0x0
Loading section .copy.table, size 0xe lma 0x201a
Loading section .zero.table, size 0x8 lma 0x2028
Loading section .data, size 0x2c lma 0x2030
Start address 0x000001de, load size 8284
Transfer rate: 14 KB/sec, 2071 bytes/write.
```

### Additional proposals, ideas and PR's are welcome!
