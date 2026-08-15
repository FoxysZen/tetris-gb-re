### Tetris GB Recompiled

A C++ recompilation of Game Boy's Tetris, created through reverse engineering with the help of Ghidra and BGB.
Uses SDL2 for window rendering, graphics, and input handling.

---

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

### How to compile
```bash
make
./tetris_re
```