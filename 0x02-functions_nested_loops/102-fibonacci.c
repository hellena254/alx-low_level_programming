#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i, n = 50;
	long fib[50];

	/* initialize the first two fib numbers*/
	fib[0] = 1;
	fib[1] = 2;

	/* generate the sequence*/
	for (i = 2; i < n; i++)
		fib[i] = fib[i - 1] + fib[i - 2];

	/* print the fibonacci numbers separated by commas*/
	for (i = 0; i < n; i++)
	{
		printf("%ld", fib[i]);

		if ((i < n) - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
