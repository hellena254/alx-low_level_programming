#include "main.h"

/**
 * print_diagsums- print the sum of two diagonals of a square matrix
 * @a: 2d array of integers
 * @size: size of an array
 */

void print_diagsums(int *a, int size)
{
	int i, sum, square;

	i = 0;
	sum = 0;
	square  = size * size;
	while (i < square)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);
	
	i = 0;
	sum = 0;
	while (i < square)
	{
		if (i % (size - 1) == 0 && i != (square - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
