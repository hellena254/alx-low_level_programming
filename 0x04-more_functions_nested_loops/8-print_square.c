#include "main.h"

/**
 * print_square()- prints a square
 * @size: integer parameter
 */

void print_square(int size)
{
	int l, w;

	if (size < 1)
		_putchar('\n');

	l = 0;
	/* iterate through each row*/
	while (l < size)
	{
		w = 0;
		/* iterate through each column*/
		while (w < size)
		{
			_putchar('#');
			w++;
		}
		_putchar('\n');
		l++;
	}
}
