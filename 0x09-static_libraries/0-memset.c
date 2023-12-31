#include "main.h"

/**
 * _memset()- fills the first n bytes of the mem area pointed by s
 * @s: pointer to the memory area
 * @b: constant byte to be filled
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
