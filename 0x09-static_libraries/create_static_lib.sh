#!/bin/bash
gcc -c *.c           # Compile all the .c files into .o object files
ar rcs liball.a *.o  # Create the static library from the .o files
