#include "main.h"
#include <unistd.h>

/**
 * times_table: prints the 9 times table
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
			if (j <= 9)
			{
				putchar(' ');
			} else
			{
				putchar((result / 10) + '0');
			}
			putchar((result % 10) + 10);
		}
		putchar('\n');
	}
}
