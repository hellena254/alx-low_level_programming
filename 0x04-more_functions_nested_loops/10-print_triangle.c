#include "main.h"

/**
 * print_triangle()- print a triangle
 * @size: int parameter
 */

void print_triangle(int size)
{
	int i, j, k;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		j = size - 1 - i;
		k = i + 1;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		while (k > 0)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
		i++;
	}

	if (size <= 0)
		_putchar('\n');
}
