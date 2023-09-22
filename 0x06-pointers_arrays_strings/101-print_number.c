#include "main.h"

/**
 * print_number()- print integer
 * @n: firts integer
 */

void print_number(int n)
{
	int i, j, num, nums, pow;
	unsigned int temp, number, newNum;

	num = 0;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	newNum = temp;

	while (newNum >= 10)
	{
		newNum = newNum / 10;
		num++;
	}

	nums = num + 1;
	pow = 1;
	i = 1;

	while (i < nums)
	{
		pow = pow * 10;
		i++;
	}

	j = pow;
	while (j >= 1)
	{
		number = (temp / j) % 10;
		_putchar(number + '0');
		j = j / 10;
	}
}
