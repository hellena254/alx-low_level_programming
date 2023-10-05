#include "main.h"

/**
 * array_range- function that creates an array of integers
 *
 * @min: parameter of the minimum value
 * @max: parameter of the maximum value
 * Return: pointer of newly created array
 */

int *array_range(int min, int max)
{
	int size, i;
	int *ptr;

	/* Check if min > max*/
	if (min > max)
		return (NULL);

	size = max - min + 1;
	/*Allocate memory to ptr*/
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
