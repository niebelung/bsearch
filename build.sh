#!/bin/bash

rm -fr build
mkdir build || exit 1
cd build
cmake ../ || exit 1
make