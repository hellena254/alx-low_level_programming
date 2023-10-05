#include "main.h"

/**
 * malloc_checked()-function that allocates memory using
 * Desrciption- if malloc fails exit with status value 98
 * @b: size to allocate
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
