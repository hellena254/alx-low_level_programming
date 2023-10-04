#include "main.h"

/**
 * create_array()-creates an array of chars and initialize with specific char
 *
 * @size: parameter of type int
 * @c: second parameter of type char
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
