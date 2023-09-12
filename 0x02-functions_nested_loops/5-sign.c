#include "main.h"

/**
 * print_sign(): function that prints the sign of a number depending
 *		on the whether it is positive, negative or zero.
 *
 *@n: parameter passing through the function
 *
 *Return: 1 if n > 0, 0 if n = 0 and -1 if n < n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	} else if (n == 0)
	{
		putchar('0');
		return (0);
	} else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
