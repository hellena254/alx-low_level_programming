#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible combinations of
 * single digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
		putchar(',');
		putchar(' ');
	}
	if (digit == 9)
	{
		putchar('\n');
	}
	return (0);
}
