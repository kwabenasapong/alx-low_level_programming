#!/bin/bash
gcc add.c div.c mod.c mul.c sub.c -c -fPIC
gcc *.o -shared -o 100-operations.so

