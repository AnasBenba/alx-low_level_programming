# C - Dynamic Libraries

This repository contains examples and information about dynamic libraries in the C programming language.

## Introduction

Dynamic libraries, also known as shared libraries, are files containing reusable code and resources that can be linked to and used by multiple programs. Unlike static libraries, which are linked with the program at compile-time, dynamic libraries are loaded and linked during runtime.

Dynamic libraries offer several advantages, including reduced executable size, modularity, and the ability to update libraries without recompiling the entire program. Understanding how to create, link, and use dynamic libraries is essential for efficient code reuse and maintaining modular software systems.

This repository provides examples and explanations to help you understand the concepts and techniques related to dynamic libraries in C.

## Static Libraries vs. Dynamic Libraries

Before diving into dynamic libraries, it's important to understand the difference between static libraries and dynamic libraries.

Static libraries:

- Compiled and linked with the program at compile-time.
- The library code is copied into the program's executable.
- Results in a larger executable size.
- Provides better performance as library functions are directly accessible.
- Requires recompilation of the program if the library is updated.

Dynamic libraries:

- Linked with the program at runtime.
- The library code is loaded into memory when needed.
- Results in a smaller executable size.
- Allows updating the library without recompiling the program.
- Slightly slower performance due to additional indirection.
- Enables code sharing among multiple programs.

## Creating Dynamic Libraries

Creating a dynamic library typically involves the following steps:

1. Write the library source code:

   - Create the source files containing the library code.
   - Implement functions, variables, and any required resources.
   - Follow good software engineering practices and adhere to the library's intended functionality.

2. Compile the library source code:

   - Use a compiler (e.g., GCC) to compile the library source files.
   - Specify the appropriate compiler flags and options for generating a dynamic library.
   - Example command: `gcc -shared -o libexample.so example.c`

3. Verify the library creation:

   - Check if the dynamic library file (e.g., `libexample.so`) is generated successfully.
   - Use tools like `nm` to examine the symbols and functions in the library.

Refer to the provided examples and code snippets in this repository for a more detailed understanding of creating dynamic libraries in C.

## Linking with Dynamic Libraries

Linking a program with a dynamic library allows the program to use the functions and resources provided by the library. Here's a general outline of the steps involved:

1. Specify the library path and name during compilation:

   - Use the `-L` flag to specify the directory where the dynamic library is located.
   - Use the `-l` flag followed by the library name (without the `lib` prefix and file extension).
   - Example command: `gcc main.c -L/path/to/library -lexample -o program`

2. Run the program:

   - Ensure that the dynamic library is available in the library search path or set the appropriate environment variables like `$LD_LIBRARY_PATH` to locate the library at runtime.
   - Execute the program, and it will dynamically load and use the functions from the
