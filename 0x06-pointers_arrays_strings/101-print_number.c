#include "main.h"

/**
 * print_number()- print integer
 * @n: firts integer
 */

void print_number(int n)
{
	int negative, limit;

	negative = 0;
	limit = 1;
	if (n < 0)
	{
		_putchar('-');
		negative = -1;
	}
	while (n > 9 || n < -9)
	{
		limit *= 10;
		n /= 10;
	}

	while (n > 0)
	{
		if (n > 9)
		{
			if (!negative)
				_putchar((n / limit % 10) + '0');
			else
				_putchar((n / limit % 10) * -1 + '0');
			limit /= 10;
		}
		if (limit == 1)
		{
			if (negative)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			limit = 0;
		}
	}
}
