#include "main.h"

/**
 * more_numbers()- print 10 times the numbers for 0 to 14
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				/*print the tens digit*/
				_putchar('0' + j / 10);
			else
				/*print the ones digit*/
				_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
