#include <stdio.h>

/**
 * main - entry point
 *
 * Description: find and print the firts 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 98;
	int a = 1, b = 2, count = 2;
	int next;

	/*print the firts two*/
	printf("%d, %d", a, b);

	/* Generate na dprint the remaining numbers*/
	while (count < n)
	{
		next = a + b;
		printf("%d", next);

		/*update variables for the next iteration*/
		a = b;
		b = next;
		count++;
	}
	printf("\n");
	return (0);
}
