#include "main.h"

/**
 *print_number()- print numbers
 *@n: integer parameter
 */

void print_number(int n)
{
	int i;
	long j, number;

	number = n;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	i = 1;
	j = 1;
	while (i)
	{
		if (number / (j * 10) > 0)
			j *= 10;
		else
			i = 0;
	}

	while (number >= 0)
	{
		if (j == 1)
		{
			_putchar(number % 10 + '0');
			number = -1;
		}
		else
		{
			_putchar((number / j % 10) + '0');
			j /= 10;
		}
	}
}
