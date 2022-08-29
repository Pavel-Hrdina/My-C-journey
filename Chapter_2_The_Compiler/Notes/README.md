# The compiler

Unlike the GNU shell, C hast two stages, that must be done before calling the programs executable. The fist stage is writing the program itself to the text file. This file can't be read by the machine directly, as it cannot read it. Instead we have to somehow make the text file readable by the machine. To do so, we use a programs called, the compiler. The compiler takes the text file, with the nice a readable syntax and turns it into a program readable by the machine. There are multiple compilers, but I use the gcc compiler (GNU Compiler Collection).

1. To compile a file we write something like `gcc file_name.c`

This create a file that that is normally called `a.out`

- There are multiple file names extensions that gcc supports, they go as follows:

1. **Source code file** program_name.c

2. **Object files** program_name.o

3. **Executable file** program_name

4. **Header file** name.h

5. **Library file** libraryname.a or libname.so

The compiler also has the feature of errors, so that you know what went wong on compile time. However, if the program is unsafe and compiles without errors, running the program can result in _blowing your entire leg off_.
