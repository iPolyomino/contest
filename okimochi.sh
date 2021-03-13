#!/bin/zsh

uncrustify -l CPP --no-backup */**/*.cpp
omake clean
