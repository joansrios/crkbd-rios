# Personal Layout to corne keyboard

Use this corne keyboard layout after download the QMK firmware on: [QMK Firmware](https://github.com/qmk/qmk_firmware)

Put the firmware on the user root folder, and copy this file into: 

`~\qmk_firmware\keyboards\crkbd\keymaps`.

Then install `QMK MSYS` and execute:

```bash
qmk compile -kb crkbd -km crkbd-rios
```

And run `QMK Toolbox` and install the layout on your keyboard saved on: `\qmk_firmware\crkbd_rev1_crkbd-rios.hex`
