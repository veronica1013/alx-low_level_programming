#!/bin/bash
# create_static_lib.sh - Script to create a static library from all .c files in the current directory

# Compile each .c file into an object file
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library from all the object files
ar rcs liball.a *.o

# Clean up the object files if desired
# rm *.o

