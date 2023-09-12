#include "main.h"

/**
 * print_last_digit(): prints the last digit of a number to the standard output
 *
 *@j: parameter passed through the function
 *
 * Return: value of last_num
 */

int print_last_digit(int j)
{
	int last_num;

	last_num = j % 10;

	putchar(last_num + '0');
	return (last_num);
}
