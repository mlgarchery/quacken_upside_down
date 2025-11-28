# Quacken

🤦 
<img width="1452" height="1558" alt="image" src="https://github.com/user-attachments/assets/161b14bb-3abb-4325-a347-9183b0508fe3" />

Wait this isn't lost:


QMK firmware for the [Quacken](https://github.com/Nuclear-Squid/Quacken) keyboard, a 3x6+3 on each hand unibody keyboard with Kailh Choc switches.

- Keyboard Maintainer: [Nuclear-Squid](https://github.com/Nuclear-Squid)
- Hardware Supported: Pro Micro (RP2040 for this firmware)
- Hardware Availability: PCB is still a prototype for now

## How to install it?

Brand new to QMK? Start with the [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

Once QMK setup is done, clone this repository inside your existing [qmk_firmware](https://github.com/qmk/qmk_firmware) repository:

```sh
git submodule add https://github.com/mlgarchery/quacken_upside_down.git keyboards/quacken_upside_down
```

Build the default keymap:

```sh
qmk compile -kb quacken_upside_down -km default
```

Flash the default keymap:

```sh
qmk flash -kb quacken_upside_down -km default
```

## Bootloader

Enter the bootloader in 3 ways:

- **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
- **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
- **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

## Development notes

The matrix looks like this:

```
 ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
 │0,0│0,1│0,2│0,3│0,4│0,5│       │4,5│4,4│4,3│4,2│4,1│4,0│
 ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
 │1,0│1,1│1,2│1,3│1,4│1,5│       │5,5│5,4│5,3│5,2│5,1│5,0│
 ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
 │2,0│2,1│2,2│2,3│2,4│2,5│       │6,5│6,4│6,3│6,2│6,1│6,0│
 └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
             ┌───┬───┬───┐       ┌───┬───┬───┐
             │3,3│3,4│3,5│       │7,5│7,4│7,3│
             └───┴───┴───┘       └───┴───┴───┘
```
