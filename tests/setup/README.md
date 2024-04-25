# Running C++20 Code with GCC

This guide outlines the steps to compile and run C++20 code using the GNU Compiler Collection (GCC). It is intended for those who want to work with modern C++ features. More specifcially, it is important that we use a consistent version of C++ throughout the entirety of this project to ensure consistency. 

Flag 
```bash
-std=c++20
```
should be used on all g++ compilation commands. 

## Prerequisites
Before running C++20 code, ensure you have the following:
- GCC installed (Version 10 or later for C++20 support)
- Basic understanding of C++ programming
- A terminal or command-line environment

## Compiling C++20 Code
To compile a C++20 program, use the following command in your terminal or command line:

```bash
g++ -std=c++20 <source-file> -o <output-file>
```

## Example 
Here's an example to compile a C++20 program, main.cpp, into an executable called my_program:

```bash
g++ -std=c++20 main.cpp -o my_program
```

## Running the program
To run the compiled executable, use the following command:
```bash
./my_program
```
This will execute the compiled code and display the output in your terminal or command-line environment.