#include "main.h"

/**
 * _memcpy- copies n bytes from memory area src to dest
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to copy
 * Return: a pointer to the destination memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp;

	temp = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (temp);
}
