# Personal Layout to corne keyboard

This custom layout is based on the following tutorial

[QMK tutorial](https://www.youtube.com/watch?v=mz8WG5e--jA&t=428s)

Use this corne keyboard layout after download the QMK firmware on: [QMK Firmware](https://github.com/qmk/qmk_firmware)

Then install `QMK MSYS` and execute:

After install `QMK MSYS` and `MSYS2` execute in the MSYS2x64 terminal:

```bash
pacman -Syu
pacman -Su
pacman --needed --noconfirm --disable-download-timeout -S git mingw-w64-x86_64-toolchain
pacman -S mingw-w64-x86_64-python-pip
exit
pacman -S $MINGW_PACKAGE_PREFIX-python-qmk
qmk setup
cd $USERPROFILE/qmk_firmware
qmk compile -kb al1 -km default
cd /keyboards/crkbd/keymaps
git clone https://github.com/joansrios/crkbd-rios.git
```
Then edit or just compile this custom layout

```bash
qmk compile -kb crkbd -km crkbd-rios
```

And run `QMK Toolbox` and install the layout on your keyboard saved on: `\qmk_firmware\crkbd_rev1_crkbd-rios.hex`
