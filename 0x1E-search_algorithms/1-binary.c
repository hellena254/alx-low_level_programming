#include<stdio.h>

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
	int left = 0, mid;
	int right = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(",");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
