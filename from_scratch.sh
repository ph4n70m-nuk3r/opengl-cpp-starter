#!/usr/bin/env -S bash -e

## Build. ##
cmake -B build -D USE_ASSIMP=YES
cmake --build build

## Run. ##
./build/starter

