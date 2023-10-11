#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);
	char *operator;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	func = get_op_func(operator);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
