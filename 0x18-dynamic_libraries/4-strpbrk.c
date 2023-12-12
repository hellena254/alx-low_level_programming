#include "main.h"

/**
 * _strpbrk()- locates the first occurence in the string s
 * @s: pointer to the string to search
 * @accept: pointer to characters to serach for
 *
 * Return: a pointer to the byte in s that matches bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *ptr;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				ptr = &s[a];
				return (ptr);
			}
			b++;
		}
		a++;
	}

	return (0);
}
