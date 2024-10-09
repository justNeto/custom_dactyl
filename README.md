# custom_dactyl

![custom_dactyl](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [justNeto](https://github.com/justNeto)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make custom_dactyl:default

Flashing example for this keyboard:

    make custom_dactyl:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

Another way to compile the code is to use the qmk command line interface:
```bash
qmk compile -kb custom_dactyl -km default
```

Reboot the keyboard holding the magic reset (0.0) when turning on the keyboard and coping the .uf2 file that was generated on the previous step via:
```bash
cp custom_dactyl_default.uf2 /run/media/neto/RPI-RP2
```