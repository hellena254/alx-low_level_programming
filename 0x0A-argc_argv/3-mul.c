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
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
