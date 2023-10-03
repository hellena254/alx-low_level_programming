#include <stdio.h>

/**
 * main- entry point
 *
 * Description: print all argument passed
 * @argc: argument count
 * @argv: argument passed as an array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

