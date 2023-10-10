# Malloc

## Memory Allocation

In C, memory allocation is essential for dynamic memory management. It allows you to allocate and deallocate memory at runtime, enabling efficient memory usage and dynamic data structures.

`malloc` Function
The `malloc` (memory allocation) function is used to dynamically allocate memory on the heap. It's part of the C Standard Library and is declared in the `<stdlib.h>` header.

**Allocating Memory**
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    arr = (int *)malloc(5 * sizeof(int)); // Allocating memory for an integer array of size 5

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Now, 'arr' points to a block of memory that can hold 5 integers
    // Use 'arr' as needed

    free(arr); // Release the allocated memory when done

    return 0;
}
```
 - `malloc` allocates memory for a specified number of bytes and returns a pointer to the first byte of the allocated block.
 - You must cast the result to the appropriate data type.
 - Always check if `malloc` returns `NULL` to handle memory allocation failures gracefully.

**Releasing Memory**
To prevent memory leaks, it's crucial to release memory allocated with `malloc` using the `free` function.
```
free(arr); // Release the memory pointed to by 'arr'
```

## Benefits of Dynamic Memory Allocation

 - Allows flexible data structures, such as arrays and linked lists, to grow or shrink as needed.
 - Avoids wasting memory by allocating only what's necessary.
 - Provides memory that persists beyond the scope of a function.
   
## Additional Resources

 - [C Dynamic Memory Allocation - Wikipedia](https://en.wikipedia.org/wiki/C_dynamic_memory_allocation)
 - [Dynamic Memory Allocation in C - GeeksforGeeks](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
 - [C Programming Memory Management - Tutorialspoint](https://www.tutorialspoint.com/cprogramming/c_memory_management.htm)
