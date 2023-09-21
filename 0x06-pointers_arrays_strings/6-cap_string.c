#include "main.h"

/**
 * cap_string- capitalize all words of a string
 * @s: pointer to a character
 * Return: return a character
 */

char *cap_string(char *s)
{
	int i, j;
	int nextChar;
	char separator[] = ",;.!?\"(){}\n\t";

	for (i = 0, nextChar = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			nextChar = 1;
		for (j = 0; separator[j] != '\0'; j++)
		{
			if (separator[j] == s[i])
				nextChar = 1;
		}

	if (nextChar)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
			nextChar = 0;
		}
		else if (s[i] > 64 && s[i] < 91)
			nextChar = 0;
		else if (s[i] > 47 && s[i] < 58)
			nextChar = 0;
	}
	}

	return (s);
}
