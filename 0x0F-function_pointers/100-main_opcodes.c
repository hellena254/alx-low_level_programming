#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes- Print hexadecimal opcodes of a memory address
 *
 * This function prints the hexadecimal opcodes
 * of a specified memory address for a given number of bytes.
 *
 * @addr: The memory address to print opcodes from.
 * @num_bytes: The number of bytes to print.
 */

void print_opcodes(char *addr, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", addr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - entry point of the program
 *
 * This function is the entry point of the program
 * It parses the command-line argument to determine
 * the number of bytes to print from the main function,
 * performs error checking, and prints the opcodes accordingly
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num_bytes;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (char *)&main;
	print_opcodes(main_ptr, num_bytes);

	return (0);
}
