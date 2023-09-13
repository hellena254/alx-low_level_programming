#include <stdio.h>

/**
 * main- entry point
 *
 *description: find and print the sum of the even-valued terms, fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
	long limit = 4000000;
	long sum = 0;
	long a = 1, b = 2;
	long next;

	while (b <= limit)
	{
		if ((b % 2) == 0)
			sum += b;

	/* next Fibonacci number*/
	next = a + b;
	a = b;
	b = next;
	}

	printf("%ld\n", sum);
	return (0);
}

