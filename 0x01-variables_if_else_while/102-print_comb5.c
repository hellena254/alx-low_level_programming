#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2;

	/* Loop to iterate through the first two-digit */
	for (num1 = 0; num1 <= 99; num1++)
	{
		/* loop to iiterate the sec digit*/
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num1 < num2)
			{
				putchar('0' + num1 / 10);
				putchar('0' + num1 % 10);
				putchar(' ');
				putchar('0' + num2 / 10);
				putchar('0' + num2 % 10);

				/*Check if it's not the last combination */
				if (num1 != 98 || num2 != 99)
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
