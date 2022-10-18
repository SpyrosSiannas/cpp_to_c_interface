#!/bin/bash

g++ -c cpp_inter.cpp cppimpl.cpp
gcc -o out test.c cpp_inter.o cppimpl.o -lstdc++

# Clean up
rm -f ./*.o

