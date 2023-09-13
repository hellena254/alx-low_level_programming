#include <stdio.h>

/**
 *main - entry point
 *
 *Description: prints sum of multiple of 3 or 5
 *
 *Return: Always 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
