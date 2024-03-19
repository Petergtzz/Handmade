#!/bin/zsh

mkdir -p ../../build 
pushd ../../build
c++ ../handmade/code/sdl_handmade.cpp -o handmadehero `sdl2-config --cflags --libs`
popd
