## idun-base

This repository contains some content intended to help users become familiar with some of the capabilities of the idun-cartridge. There are 7 sub-directories.

C64-PD-Games/
-------------
Contains several hundred public domain C64 games, most of which can be launched from the idun-cartridge. This sub-directory is setup as the `G:` drive in the default SD card image. A `gamelist.csv` file is included, and allows these games to be used in the cart's Arcade mode. Demo videos for Arcade mode exist on the project's [YouTube page](https://www.youtube.com/@idunproject).

apps/
-----
Contains some Lua sample applications. Run them from the idun-shell by simply typing the name, such as `cube.app`. Most can be exited with the STOP key to return to the shell. Some have a popup menu, which is activated using `C= + ⟵`.

demos/
------
Contains two single-file .prg demos for C64 mode and one .d64 image of the C128 VDC graphics demo "Risen from Oblivion".

+ For the C64 demos, first `cd` to this directory in idun-shell, then enter C64 mode with the `go64` command. From the C64 basic prompt, use `RUN"<filename>.prg"` to load and run the demos.
+ For the C128 VDC demo, first use the `mount` command to attach the .d64 image to device D. Then, `reboot` to return to C128 BASIC, and map device D: to unit 10 (the default). Use `run"risen*",u10` to start the demo.

games/
------
Contains several C128 games, a Galaga port for C64 mode, "shareware" version of PETSCII Robots 128, and two interactive fiction titles for playing in `frotz`.

+ Start `galaga` or `galaga-usb` from C64 mode similar to the C64 demos.
+ Mount `Robots-128.d71` on `D:` and select `D:` as the idun device. Press `F5` in BASIC to launch the game booter. Use your already configured USB gamepad to control the game.
+ Mount the disk images for the C128 games and use either `load` from idun-shell or `run` from the basic prompt to start them.
+ `frotz` is a Linux program that is *not installed by default*. You can add it from the Linux shell with `sudo pacman -S frotz-ncurses`. Then, also from the Linux shell, start the game with a command like `frotz <z-file-name>`.

pics/
-----
Contains many pics viewable using the VDC/80-column or the VIC-II/40-column display.
+ Use the `showvdc` command in the idun-shell to display images in the mono/ and vdc-color/ directories. _Note:_ most images are hi-res and will require 64kB VRAM.
+ Use the `showzx` command in the idun-shell to display images in the spectrum/ directory. These are low-res and will work with 16kB VRAM.
+ Use `koala.app` in the idun shell to display VIC-II Koala format images. Sample images are in the koa/ sub-directory.
+ `ansilove.ans` is a color ANSI graphic useful for testing. Use `mode ans` to load ANSI character set, then `linux "cat ansilove.ans"` to display the file in the tty.

sids/
-----
Contains 50+ SID music files that can be played from the idun-shell using the `sidplay` command.

z80/
----
Contains sample C code programs for the Z80 mode. These are compiled from the Linux prompt using `zcc`, then can be run from the idun Dos shell with the `zload` command. To build, just run `make` from the _src/_ sub-directory. For more details, take a look at the [idun-zcc repository](https://github.com/idun-project/idun-zcc) and the [Z88dk page](https://z88dk.org).
