# CSH (CSH-GUI)
CSH is a small shell program completly written in C.

## Instalation
To download and install just run the following commands:
```bash
git clone https://github.com/mrehfeld-code/CSH
cd CSH
git submodule update --init
cd external-depencies/SDL_ttf
git submodule update --init
cmake -S . -B build
cmake --build build
sudo cmake --install build
```

If everything went well you can start the shell with `CSH` and the terminal window with `CSH-GUI`.
