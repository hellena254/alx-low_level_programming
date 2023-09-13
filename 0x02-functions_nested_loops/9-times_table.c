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
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if ((result != 0) && < 10)
				putchar((result / 10) + '0');
			else
				putchar(' ');

			putchar((result % 10) + '0');

			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
