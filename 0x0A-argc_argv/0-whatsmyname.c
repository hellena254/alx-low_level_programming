#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the name of the program
 * @argc: argument count
 * @argv: argument passed as an array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
