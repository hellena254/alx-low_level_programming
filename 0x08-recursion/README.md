# C - Recursion

## Introduction to Recursion

Recursion is a fundamental programming concept where a function calls itself in order to solve a problem. In the context of C programming, it involves a function making a call to itself to break down a complex problem into simpler sub-problems. Recursion is a powerful and elegant technique for solving problems that exhibit a recursive structure.

In a recursive function, there are two main components:

1. **Base Case(s):** This is the termination condition that defines when the recursion should stop. Without a base case, the recursive function would continue calling itself indefinitely, leading to a stack overflow.

2. **Recursive Case(s):** This is where the function calls itself with a modified version of the problem. Each recursive call should bring the problem closer to the base case.

## Task List

This repository contains C programs that demonstrate the concept of recursion. Each program corresponds to a specific task as outlined below:

### 0-puts_recursion.c
This program defines a function that prints a string followed by a new line. It demonstrates a simple example of recursion, where the function calls itself to print each character of the string until it reaches the null terminator, which serves as the base case.

### 1-print_rev_recursion.c
This program defines a function that prints a string in reverse order. It uses recursion to print the characters in reverse by making recursive calls before printing each character.

### 2-strlen_recursion.c
This program defines a function that returns the length of a given string using recursion. It demonstrates how recursion can be used to count the characters in a string by making recursive calls and incrementing a counter until the null terminator is reached.

### 3-factorial.c
This program defines a function that calculates and returns the factorial of a given number using recursion. It showcases how recursion can be used to solve mathematical problems by breaking them down into smaller sub-problems.

### 4-pow_recursion.c
This program defines a function that calculates and returns the value of x raised to the power of y using recursion. It demonstrates how recursion can be used for exponentiation by repeatedly multiplying the base value.

### 5-sqrt_recursion.c
This program defines a function that calculates and returns the natural square root of a number using recursion. It shows how recursion can be applied to compute complex mathematical operations iteratively.

### 6-is_prime_number.c
This program defines a function that checks whether a given integer is a prime number and returns 1 if it is, or 0 if it's not. It utilizes recursion to test divisibility by iterating through potential divisors.

### 100-is_palindrome.c
This program defines a function that checks if a given string is a palindrome (reads the same forwards and backwards) and returns 1 if it is, or 0 if it's not. It demonstrates how recursion can be employed to compare characters at both ends of the string

### 101-wildcmp.c
This program defines a function that compares two strings and returns 1 if they can be considered identical according to certain wildcards, otherwise it returns 0. It showcases how

## How to Compile and Run
Each program can be compiled and run independently. To compile a program, you can use the gcc compiler:

``gcc -Wall -Werror -Wextra -pedantic <program_name.c> -o <output_name>``

To run the compiled program:

``./<output_name>``

Replace `<program_name.c>` with the name of the C file you want to compile and `<output_name>` with the desired name for the executable output.
