#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num, i;
	int sum = 0;
	char *endptr; /*pointer for error checking*/

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
