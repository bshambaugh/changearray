#!/bin/bash

make
for f in *.out; do
    valgrind -v --log-file="${f%.*}"_memory.txt ./$f
done
mkdir ardunio
cd src
for f in *c; do 
    cp "$f" "../ardunio/${f%.c}.cpp"
done
cp *.h ../ardunio/
cd ..
rm ardunio/main.cpp
