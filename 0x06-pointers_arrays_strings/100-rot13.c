#include "main.h"

/**
 * rot13()- encode using rot13
 * @str: pointer to a character
 * Return: characters return
 */

char *rot13(char *str)
{
	int i;
	char caps[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char lower[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			str[i] = (str[i] - 65 > 25) ?
				caps[str[i] - 97] : lower[str[i] - 65];
		}
	}
	return (str);
}
