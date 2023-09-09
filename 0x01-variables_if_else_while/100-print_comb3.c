#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print different combination of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1, digit2;

	/* Iterate the first digit */
	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		/* iterate through the second digit */
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			/* convert the digits to characters */
			putchar('0' + digit1);
			putchar('0' + digit2);

			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
