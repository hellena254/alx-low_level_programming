#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Description: print prime factors
 * Return: Always 0
 */

int main(void)
{
	int i, j;
	long digit = 612852475143;

	j = sqrt(digit);
	for (i = j; i > 2; i++)
	{
		if (digit % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
