# More Malloc

This README provides a comprehensive overview of memory allocation in C, covering the `calloc` and `realloc` functions.

## ``calloc`` Function

The `calloc` (contiguous allocation) function is used to allocate a block of memory for an array and initialize all its elements to zero.

**Allocating and initializing memory**
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    arr = (int *)calloc(5, sizeof(int)); // Allocating memory for an integer array of size 5

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Now, 'arr' points to a block of memory that can hold 5 integers, all initialized to 0
    // Use 'arr' as needed

    free(arr); // Release the allocated memory when done

    return 0;
}
```

- `calloc` allocates memory for an array of elements and initializes them to zero.
- It takes two arguments: the number of elements and the size of each element.
  
## `realloc` Function

The `realloc` (reallocate) function is used to resize a previously allocated block of memory.

**Resizing Memory**
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

    // Resize the array to hold 10 integers
    arr = (int *)realloc(arr, 10 * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Now, 'arr' points to a block of memory that can hold 10 integers
    // Use 'arr' as needed

    free(arr); // Release the allocated memory when done

    return 0;
}
```
- `realloc` allows you to change the size of an existing memory block.
- It takes a pointer to the existing block and the new size.
- The existing data is preserved, and any new memory is uninitialized.

 ## Benefits of Dynamic Memory Allocation
- Efficient memory usage by allocating only what's necessary.
- Flexibility in creating data structures that can grow or shrink.
- Memory that persists beyond the scope of a function.

## Resources
- [Dynamic Memory Allocation in C - GeeksforGeeks](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [C Programming Memory Management - Tutorialspoint](https://www.tutorialspoint.com/cprogramming/c_memory_management.htm)
