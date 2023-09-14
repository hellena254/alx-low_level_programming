#include "main.h"

/**
 * print_line()- draw a straight line int the terminal
 * @n: integer parameter
 * Return- ALways 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
