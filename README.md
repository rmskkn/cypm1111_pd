## Initial PD S1 DRP project skeleton

This project aims to simplify the way of configuring Infineon
project based on S1 DRP instead of native mtb-based way
comming from ModusToolbox.


### Preprequsites
Debian based:
```bash
apt install arm-none-eabi-gcc git
```

Arch AUR:
```bash
pacman -Syy && pacman -S arm-none-eabi-gcc git
```

### Compilation

```bash
make
```

### Debugging

1. Invoke openocd on builtin onboard debugger on the host;
2. Run command:

```bash
arm-none-eabi-gdb ./build/cypm1111.elf -x 'target remote :3333'
```

Additional proposals, ideas and PR's are welcome!
