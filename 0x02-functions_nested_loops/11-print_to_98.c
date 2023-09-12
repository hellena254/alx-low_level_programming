#include "main.h"

/**
 *print_to_98(): prints all natural numbers from n to 98
 *
 *@n: parameter passed through the function
 *
 * Return: ALways 0
 */

void print_to_98(int n)
{
	int m;

	for (m = n; m <= 98; m++)
	{
		putchar(m + '0');

		while (m != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
