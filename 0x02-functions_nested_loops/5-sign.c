#include "main.h"
#include <unistd.h>


/**
 * print_sign()- function that prints the sign of a number depending
 *		on the whether it is positive, negative or zero.
 *
 *@n: parameter passing through the function
 *
 *Return: 1 if n > 0, 0 if n = 0 and -1 if n < n
 */

int print_sign(int n)
{
	char plus = '+';
	char zero = '0';
	char minus = '-';

	if (n > 0)
	{
		write(1, &plus, 1);
		return (1);
	} else if (n == 0)
	{
		write(1, &zero, 1);
		return (0);
	} else if (n < 0)
	{
		write(1, &minus, 1);
		return (-1);
	}
}
