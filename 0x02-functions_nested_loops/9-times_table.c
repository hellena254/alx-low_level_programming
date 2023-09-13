#include "main.h"
#include <unistd.h>

/**
 * times_table()-prints the 9 times table
 *
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		putchar('0');
		for (j = 0; j <= 9; j++)
		{
			putchar(',');
			putchar(' ');
			result = i * j;

			if (result <= 9)
				putchar(' ');
			else
				putchar((result / 10) + '0');

			putchar((result % 10) + '0');
		}
		putchar('\n');
	}
}
