#!/bin/bash

if [ -z "$1" ]; then
  echo "Usage: $0 <filepath_without_extension>"
  exit 1
fi

filepath=$1

gcc -o "${filepath}.o" "${filepath}.c" -lm

if [ $? -ne 0 ]; then
  echo "Compilation failed."
  exit 1
fi

./"${filepath}.o" < inputs.txt
