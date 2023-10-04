# 0x09. C - Static libraries

## Introduction to Static Libraries

Static libraries in C, also known as "archive libraries," are collections of object files that are linked with a program at compile-time. They contain precompiled code and data that can be reused in multiple programs. Static libraries provide a way to package and distribute commonly used functions, making code modular and more maintainable.

Static libraries have the file extension `.a` on Unix-like systems (e.g., `libmy.a`), and they are created using the `ar` (archive) utility. These libraries are linked with programs during the compilation process, resulting in a single executable file that includes the necessary code from the library.

Static libraries offer several advantages, including:

- Improved code organization: Functions can be grouped into libraries based on their functionality, making it easier to manage and maintain code.
- Efficiency: Static linking ensures that only the necessary library functions are included in the final executable, reducing overhead.
- Portability: Static libraries can be shared across different projects and platforms without worrying about compatibility issues.

## Task 1: Create the Static Library libmy.a

To create a static library named `libmy.a`, follow these steps:

1. Compile your source code files (e.g., `file1.c`, `file2.c`, etc.) into object files using the `gcc` compiler with the `-c` flag:

   ```bash
   gcc -c file1.c file2.c -o file1.o file2.o
   
Replace `file1.c` and `file2.c` with the names of your source code files.

1. Use the `ar` (archive) utility to create the static library `libmy.a`:
   
   ```bash
    ar rcs libmy.a file1.o file2.o

This command will create the library and add the object files to it. The options rcs stand for "replace," "create," and "index."

2. Verify that the library has been created successfully:
   ```bash
ar -t libmy.a
This command will list the contents of the library, which should include the object files.

## Task 2: Create a Script (create_static_lib.sh)

To automate the creation of a static library from all the `.c` files in the current directory, you can create a script named `create_static_lib.sh.` Here's an example of such a script:

   ```bash
    #!/bin/bash
    
    # Compile all .c files in the current directory into object files
    gcc -c *.c
    
    # Create a static library named liball.a from all the object files
    ar rcs liball.a *.o
    
    # Clean up by removing the temporary object files
    rm -f *.o

Make sure to grant execute permission to the script using the following command:
 ```bash
   chmod +x create_static_lib.sh

Now, you can run the script to create the static library `liball.a`:

 ```bash
 ./create_static_lib.sh

This script will compile all `.c` files in the current directory into object files, create the static library, and then remove the temporary object files.
