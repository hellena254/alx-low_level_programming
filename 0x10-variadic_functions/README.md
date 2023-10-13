# Variadic Functions

## Introduction

Variadic functions, also known as varargs functions, are a feature in C and other programming languages that allow you to define functions that can accept a variable number of arguments. This means you can call the same function with a different number of arguments on each call. Variadic functions are particularly useful in cases where the number of arguments is not known in advance or can vary. Common examples of variadic functions include printf in C and similar functions in other languages.

## How Variadic Functions Work
Variadic functions are defined with an ellipsis (...) in the argument list, indicating that they can take a variable number of arguments. Inside the function, you use the stdarg.h library to work with the variable arguments. The key macros provided by stdarg.h are:

 - va_list: A type to hold the variable arguments.
 - va_start: Initializes the va_list with the last named argument.
 - va_arg: Retrieves the next argument from the va_list.
 - va_end: Cleans up and releases resources associated with the va_list.

### Example
```c
#include <stdio.h>
#include <stdarg.h>

void variadic_function(int num, ...) {
    va_list args;
    va_start(args, num);

    for (int i = 0; i < num; i++) {
        int value = va_arg(args, int);
        printf("%d ", value);
    }

    va_end(args);
}

int main() {
    variadic_function(3, 1, 2, 3);
    variadic_function(4, 10, 20, 30, 40);
    return 0;
}
```
In this example, the `variadic_function` accepts a variable number of integer arguments.

## Resources for Learning More

1. C Programming Absolute Beginner's Guide by Perry and Miller: This book provides a beginner-friendly introduction to variadic functions and includes examples.

2. C Programming for the Absolute Beginner by Vine: A great starting point for beginners in C programming, covering variadic functions in the later chapters.

3. [Variadic Functions in C](https://www.geeksforgeeks.org/variadic-functions-in-c/)
4. [C standard library - stdarg.h](https://www.tutorialspoint.com/c_standard_library/stdarg_h.htm)


*Happy Learning :)*
