#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print different combination of two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int digit1, digit2;

	/* Iterate the first digit (0 to 8) */
	for (digit1 = 0; digit1 <= 8; digit1++)
	{
		/* iterate through the second digit (1 to 9) */
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			/* convert the digits to characters */
			putchar('0' + digit1);
			putchar('0' + digit2);

			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
