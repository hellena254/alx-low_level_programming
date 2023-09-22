#include "main.h"

/**
 * cap_string- capitalize all words of a string
 * @s: pointer to a character
 * Return: return a character
 */

char *cap_string(char *s)
{
	int i = 0;
	int j;
	int separator[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 96 && *(s + i) <= 123)
		{
			if (i == 0)
			{
				*(s + i) = *(s + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (separator[j] == *(s + i - 1))
						*(s + i) = *(s + i) - 32;
				}
			}
		}
		i++;
	}
	return (s);
}
