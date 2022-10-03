#!/bin/bash
gcc -fPIC -c *.c
gcc -shared libdynamic.so *.o
