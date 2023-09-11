#include <stdio.h>

/**
 * main- entry point
 *
 * Description: print three combination of digits
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int digit1, digit2, digit3;

	/* Loop through the first digit (0 to 7) */
	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		/* Loop through the second digit(1 to 8)*/
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			/* loop through the third digit(2 to 9)*/
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar('0' + digit1);
				putchar('0' + digit2);
				putchar('0' + digit3);

				if (digit1 != 7 || digit2 != 8 || digit3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
