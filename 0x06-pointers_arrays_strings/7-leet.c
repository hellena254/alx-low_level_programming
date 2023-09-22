#include "main.h"

/**
 * leet()- encode a string into 1337
 * @str: pointer to a character
 * Return: character
 */

char *leet(char *str)
{
	char l[] = "aeotlAEOTL";
	char d[] = "4307143071";
	int a = 0;
	int b;

	while (*(str + a) != '\0')
	{
		for (b = 0; b <= 9; b++)
		{
			if (*(str + a) == l[b])
				*(str + a) = d[b];
		}
		a++;
	}
	return (str);
}
