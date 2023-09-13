#include "main.h"

/**
 *print_to_98()-prints all natural numbers from n to 98
 *
 *@n: parameter passed through the function
 *
 * Return: ALways 0
 */

void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d", m);
			if (m < 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (m = n; m >= 98; m++)
		{
			printf("%d", m);
			if (m > 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
