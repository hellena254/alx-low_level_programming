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

	/* Loop through the first digit*/
	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		/* Loop through the second digit*/
		for (digit2 = 0; digit2 <= 8; digit2++)
		{
			/* loop through the third digit*/
			for (digit3 = 0; digit3 <= 9; digit3++)
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
