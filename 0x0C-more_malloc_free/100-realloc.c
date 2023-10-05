#include "main.h"

/**
 * _realloc- Reallocates a memory block using malloc and free
 *
 * @ptr:pointer to the previously allocated memory
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	/* Return malloc(new_size) if ptr is null*/
	if (ptr == NULL)
		return (malloc(new_size));

	/* free ptr if new_size is 0 && ptr is not null*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/*Allocate memory*/
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	/*if new_size > old_size memory should not be initialized*/
	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);

	free(ptr);
	return (new_ptr);
}
