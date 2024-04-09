#include<stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using LSA
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search fo
 *
 * Return: first index where value is located,
 *         If value is not present in array or if array is NULL return
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* iterate through the array from 0 to size - 1 */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
