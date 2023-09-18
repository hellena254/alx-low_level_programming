#include "main.h"

/**
 * swap_int()- swap the value of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	/* store the value of a to temp*/
	temp = *a;
	/* assign the value of b to a */
	*a = *b;
	/* assign the value of temp to b*/
	*b = temp;
}
