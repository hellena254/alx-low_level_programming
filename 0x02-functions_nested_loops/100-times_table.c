#include "main.h"

/**
 *print_times_table(): function that prints the n times table, starting with 0
 *
 *@n: parameter passed through the function
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= 15; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			/* print thousands and hundreds digit*/
			if (result >= 1000)
				putchar((result / 1000) + '0');
			else
				putchar(' ');

			/* print hundreds and tens digit*/
			if (result >= 100)
				putchar(((result / 100) % 10) + '0');
			else if (result >= 10)
				putchar(' ');

			/* print tens and ones digit*/
			putchar(((result / 10) % 10) + '0');
			putchar((result % 10) + '0');

			if (j >= n)
				putchar(', ');
			else
				putchar('\n');
		}
	}
}
