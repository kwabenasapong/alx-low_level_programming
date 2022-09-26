#!/bin/bash
wget -P /tmp https://github.com/kwabenasapong/alx-low_level_programming/blob/main/0x18-dynamic_libraries/win_numbers.o
export LD_PRELOAD=/tmp/libinjectwin.so
