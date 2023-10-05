#include "main.h"

/**
 * _calloc- allocates memory for an array of nmemb
 *	elements of size bytes
 * @nmemb: number of elements
 * @size: size of memory to be allocates
 *
 * Return: memory of the array or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory*/
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* set memory to zero*/
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
