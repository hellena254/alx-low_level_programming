# 0x0A. C - argc, argv

## Arguments to `main`
In C, `argc` stands for "argument count," representing the number of command-line arguments, and `argv` is an array holding these arguments as strings.

### How to use arguments
Access and use `argc` and `argv` to process command-line arguments in your program.

### Two `main` prototypes
1. `int main(int argc, char *argv[])`: Standard form for receiving arguments.
2. `int main()`: Use when no command-line arguments are needed.

### Handling unused variables
To avoid compiler warnings for unused variables or parameters, use `__attribute__((unused))` in GCC or cast them to `(void)`.

