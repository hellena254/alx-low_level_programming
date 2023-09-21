#include "main.h"

/**
 * cap_string- capitalize all words of a string
 * @s: pointer to a character
 * Return: return a character
 */

char *cap_string(char *s)
{
	int i;
	bool capitalizeNext = true;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* if its a separator set capitalizenext to true*/
		if (_separator(s[i]))
		{
			capitalizeNext = true;
		}
		else if (isalpha(s[i]) && capitalizeNext)
		{
			s[i] = toupper(s[i]);
			capitalizeNext = false;
		}
		else if (isalpha(s[i]) && !capitalizeNext)
		{
			s[i] = tolower(s[i]);
		}
	}

	return (s);
}
