#!/bin/bash
gcc -c -wall -werror -wextra *.c
ar -rcs liball.a *.o
ranlib liball.a
gcc -o main main.c -l all
rm *.o
