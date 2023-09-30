#include "main.h"

/**
 * _strspn()- get the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the character to match in the prefix
 *
 * Return: number of bytes in the initial segment of s
 *	which consist only of btyes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int count;
	int found;
	int i;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		found = 0;
		while (accept[found] != '\0')
		{
			if (s[i] == accept[found])
			{
				count++;
				break;
			}
			found++;
		}

		if (accept[found] == '\0')
			break;
		i++;
	}
	return (count);
}
