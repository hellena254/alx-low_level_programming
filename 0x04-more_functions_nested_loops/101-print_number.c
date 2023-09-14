#include "main.h"

/**
 *print_number()- print numbers
 *@n: integer parameter
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/*Recursively print the digits before the last one*/
	if (n / 10 != 0)
		print_number(n / 10);

	print_digit(n % 10);
}
