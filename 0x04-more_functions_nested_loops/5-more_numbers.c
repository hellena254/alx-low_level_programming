#include "main.h"

/**
 * more_numbers()- print 10 times the numbers for 0 to 14
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
				/*print the tens digit*/
				_putchar('0' + j / 10);
			else
				/*print the ones digit*/
				_putchar('0' + j % 10);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
