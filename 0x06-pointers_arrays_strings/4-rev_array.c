#include "main.h"

/**
 * reverse_array()- reverse the content of an array
 * @a: pointer to the first integer
 * @n: second integer
 */

void reverse_array(int *a, int n)
{
	char temp;
	int i, j;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		/* swap the digits*/
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		/* move i and j toward each other */
		i++;
		j--;
	}
}
