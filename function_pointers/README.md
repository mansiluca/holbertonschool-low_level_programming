# Function Pointers in C

This project covers the concept of function pointers in C programming. Function pointers are pointers that point to the address of a function, allowing functions to be passed as arguments to other functions, stored in arrays, and more.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Examples](#examples)
- [Files](#files)
- [Author](#author)

## Introduction

Function pointers provide a way to call functions dynamically, which can be useful for implementing callback functions, event handlers, and more.

## Usage

To use function pointers, you need to:

1. Declare a function pointer.
2. Assign the address of a function to the pointer.
3. Call the function using the pointer.

## Examples

Here is a simple example of using a function pointer:

```c
#include <stdio.h>

void print_message() {
    printf("Hello, Function Pointers!\n");
}

int main() {
    void (*func_ptr)() = print_message;
    func_ptr();
    return 0;
}
```

## Files

- `function_pointers.h`: Header file containing function pointer declarations.
- `main.c`: Main file demonstrating the usage of function pointers.
- `README.md`: This file.

## Author

This project was created by Luca.
