#include "main.h"

/**
 * leet()- encode a string into 1337
 * @str: pointer to a character
 * Return: character
 */

char *leet(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == 'a' || *ptr == 'A')
			*ptr = '4';
		while (*ptr == 'e' || *ptr == 'E')
			*ptr = '3';
		while (*ptr == 'o' || *ptr == 'O')
			*ptr = '0';
		while (*ptr == 't' || *ptr == 'T')
			*ptr = '7';
		while (*ptr == 'l' || *ptr == 'L')
			*ptr = '1';
		ptr++;
	}
	return (str);
}
