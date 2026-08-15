# Tetris GB Recompiled

A C++ recompilation of Game Boy's Tetris, created through reverse engineering with the help of Ghidra and BGB.
Uses SDL2 for window rendering, graphics, and input handling.


## Technical Approach & Philosophy

This project is **not** a literal line-by-line assembly translation or a 1:1 matching decompilation. Instead, it is a high-level re-implementation in C++17 based on reverse engineering:

* Modern C++ Architecture: State management, scoring systems, and data types are refactored into idiomatic C++ (clean OOP, standard integers, safe memory management) rather than imitating 8-bit CPU limitations like hardware BCD math or raw memory registers.
* Faithful Gameplay: All core game mechanics, fall speeds, piece rotations, and scoring logic are extracted directly from the original Game Boy ROM via Ghidra and BGB to preserve the exact feel of the original game.

## Dependencies

Make sure you have the following packages installed:

* `g++` (C++17 support)
* `make`
* `SDL2`
* `SDL2_image`

On Arch Linux / CachyOS:
```bash
sudo pacman -S base-devel sdl2 sdl2_image
```

## How to compile
```bash
make
./tetris_re
```

---

## Legal & Copyright Disclaimer

The Tetris Company and Nintendo own Tetris, the Game Boy, and all associated game content, trademarks, and copyrights.

This is an unofficial, non-commercial fan-made project created strictly for educational, research, and reverse-engineering purposes. It is not affiliated with, sponsored by, or endorsed by The Tetris Company or Nintendo.

No ROMs, extracted Nintendo/Tetris game assets, copyrighted binaries, or firmware are distributed with this project.
