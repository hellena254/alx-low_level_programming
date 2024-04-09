#include<stdio.h>
#include "search_algos.h"

/**
 * binary_search_recursive - searches for a value in a sorted array of
 * integers using the BSA recursively
 *
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index where value is located
 *          if value is not present in array or if array is NULL
 */

int binary_search_recursive(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (binary_search_recursive(array, mid, value));

	mid++;

	return (binary_search_recursive(array + mid, size - mid, value) + mid);
}



/**
 * binary_search - searches for a value in a sorted array of
 *              integers using the BSA
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 *          if value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int i;

	i = binary_search_recursive(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
