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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = nmemb * size;

	/* Allocate memory*/
	ptr = malloc(i);

	if (ptr == NULL)
		return (NULL);

	/*initialize memory to 0*/
	memset(ptr, 0, i);

	return (ptr);
}
