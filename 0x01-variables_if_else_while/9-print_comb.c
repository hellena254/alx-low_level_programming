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
		while (digit < 9)
		{
			putchar('0' + digit);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
