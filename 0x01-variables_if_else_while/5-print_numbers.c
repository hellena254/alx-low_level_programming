#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
