#include "main.h"

/**
 *print_last_digit()-prints the last digit of a number to the standard output
 *
 *@j: parameter passed through the function
 *
 * Return: value of last_num
 */

int print_last_digit(int j)
{
	int lastNum;

	lastNum = j % 10;
	if (lastNum < 0)
		lastNum *= -1;

	_putchar(lastNum + '0');
	return (lastNum);
}
