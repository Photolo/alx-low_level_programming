#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
exposrt LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
