# CSH (CSH-GUI)
CSH is a small shell program completly written in C.

![Build Sate](https://img.shields.io/endpoint?url=https%3A%2F%2Fraw.githubusercontent.com%2Fmrehfeld-code%2FCSH%2Fmaster%2Fbuild_state.json)

## Instalation
To download and install just run the following commands:
```bash
git clone https://github.com/mrehfeld-code/CSH
cd CSH
git submodule update --init
cd external-dependencies/SDL_ttf
git submodule update --init
cmake -S . -B build
cmake --build build
sudo cmake --install build
```

If everything went well you can start the shell with `CSH` and the terminal window with `CSH-GUI`.
