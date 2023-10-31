# File Handling in C

File handling in C is an essential topic when working with input and output operations in the C programming language. This guide provides an overview of file handling, covering the basics and common operations in C.

## Introduction

File handling allows C programs to read data from and write data to external files. These files can be used to store information, configuration, or any other data required by the program.

### File Types

There are two main types of files:

1. Text files: These contain human-readable text and are generally opened in text mode for reading and writing.
2. Binary files: These can contain any data, including non-textual data such as images, audio, or binary data. They are opened in binary mode.

## Opening and Closing Files

Before performing any file operations, you need to open the file and, after you're done, close it. The standard C library provides functions for these operations.

### Opening a File

You can use the `fopen` function to open a file. It returns a `FILE` pointer that you can use for subsequent read or write operations.

```c
FILE *file = fopen("example.txt", "r"); // Open for reading
if (file == NULL) {
    // Handle error
}
```

### Closing a File

To close a file, use the `fclose` function with the `FILE` pointer.

```c
fclose(file);
```

## Reading from Files

Reading data from a file is a common operation in C. You can use functions like `fgetc`, `fgets`, or `fread` to read data from the file.

### Reading Characters

To read characters from a file, you can use the `fgetc` function.

```c
int character = fgetc(file);
if (character != EOF) {
    // Process the character
}
```

### Reading Lines

To read lines from a file, you can use the `fgets` function.

```c
char buffer[100];
if (fgets(buffer, sizeof(buffer), file) != NULL) {
    // Process the line in 'buffer'
}
```

### Reading Binary Data

For reading binary data, you can use the `fread` function. This is useful for reading structured data from a binary file.

```c
struct Data {
    int value;
    double score;
};

struct Data data;
if (fread(&data, sizeof(struct Data), 1, file) == 1) {
    // Process the binary data
}
```

## Writing to Files

Writing data to a file is as important as reading from it. You can use functions like `fputc`, `fputs`, or `fwrite` for this purpose.

### Writing Characters

To write characters to a file, you can use the `fputc` function.

```c
int character = 'A';
fputc(character, file);
```

### Writing Strings

To write strings to a file, you can use the `fputs` function.

```c
const char *text = "Hello, World!";
fputs(text, file);
```

### Writing Binary Data

For writing binary data, you can use the `fwrite` function.

```c
struct Data {
    int value;
    double score;
};

struct Data data;
// Initialize 'data'
fwrite(&data, sizeof(struct Data), 1, file);
```

## Appending to Files

To append data to a file without overwriting its contents, open the file in append mode ("a"):

```c
FILE *file = fopen("example.txt", "a"); // Open for appending
```

## Error Handling

Always check for errors when working with files. The functions mentioned above return NULL or -1 on failure. Use `feof` to check for the end of the file.

```c
if (feof(file)) {
    // End of file reached
}
```

## Example Programs

In this repository, you'll find example programs demonstrating various file handling operations in C. Feel free to explore them to gain a deeper understanding of file handling.

## Conclusion

File handling in C is a fundamental topic for reading and writing data to and from files. It is essential for processing data, configuration, and more. This guide provides a basic understanding of file handling in C and serves as a starting point for your file manipulation needs.

*Happy Coding*
