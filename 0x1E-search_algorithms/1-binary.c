#include<stdio.h>

/**
 * binary_search_recursive - searches for a value in a sorted array of
 * integers using the BSA recursively
 *
 * @array: pointer to the first element of the array to search in
 * @left: left index of the subarray
 * @right: right index of the subarray
 * @value: value to search for
 *
 * Return: index where value is located
 *          if value is not present in array or if array is NULL
 */

int binary_search_recursive(int *array, int left, int right, int value)
{
	int mid, i;

	if (left <= right)
	{
		mid = left + (right - left) / 2;
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
			return (binary_search_recursive(array, mid + 1, right, value));
		else
			return (binary_search_recursive(array, left, mid - 1, value));
	}

	return (-1);
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
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
