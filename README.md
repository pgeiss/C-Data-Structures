C-Data-Structures
=================

<h2><i>A library of data structures in C created in an attempt to further my knowledge of data structures. Still under construction!</i></h2>

Using the library is simple, #include "pgdatastructures.h" near the top of your main file. All functions and type definitions have the prefix "pg" added to them. You should avoid using functions and structures prefixed by "pg" in your program. At least for now, you should ensure that the directory structure remains the same as it is in the repository (I'll fix this later once the project matures).

It is possible to include just the data structure header file you need for your project, but beware that many structures may depend on multiple files to work. Only the main header file is guaranteed to work.

Implementations are provided for 32-bit integers, 64-bit integers, doubles, and character strings.

Since this project is using the MIT License, be sure you understand what this means for you before you #include any part of this project in your code (additional info can be fonud by reading the file LICENSE).
