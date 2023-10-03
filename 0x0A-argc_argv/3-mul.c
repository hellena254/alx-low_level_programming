#include <stdio.h>
#include <stdlib.h>

/**
 * main- entry point
 *
 * Description: multiplies two arguments and prints output
 * @argc: argument count
 * @argv: arguments passed as an array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, product = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			product = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", product);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
