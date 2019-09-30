#!/bin/bash
gcc -c main.c -lm
size main.o
readelf -s main.o
gcc -o main main.o -lm
size main
./main