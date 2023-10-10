# C Preprocessors

## Macros

In C, macros are a way to define reusable pieces of code or constants. Macros are processed by the preprocessor before the actual compilation of the code. They are typically defined using the #define directive.

**Creating Macros**
```
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
```
 - PI: Defining a constant macro for the value of Pi.
 - SQUARE(x): Defining a macro that squares its argument.

**Using macros**
```
double circle_area = PI * SQUARE(radius);
```
 - Using the defined macros to calculate the area of a circle.

 ## Benefits of Macros
 
Code Reusability: Macros allow you to define common values or operations once and use them throughout your code.
Improved Readability: Macros can make your code more readable by giving meaningful names to constants or complex expressions.

## Preprocessors

The preprocessor is a built-in tool in C that performs text substitution before compilation. It processes lines starting with # before the actual compilation takes place.

## Common Preprocessor Directives
 - #include: Used to include header files in your code.
 - #define: Used to define macros.
 - #ifdef/#ifndef/#endif: Used for conditional compilation.
 - #pragma: Used for compiler-specific directives.

**Example**
```
#include <stdio.h>

#define DEBUG 1

int main() {
    #ifdef DEBUG
        printf("Debug mode is enabled\n");
    #endif

    return 0;
}
```
- In this example, the code inside #ifdef DEBUG will only be included in the compilation if the DEBUG macro is defined.

## Additional Resources

- [C Preprocessor - Wikipedia](https://en.wikipedia.org/wiki/C_preprocessor)
- [C - Preprocessors](https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm)
