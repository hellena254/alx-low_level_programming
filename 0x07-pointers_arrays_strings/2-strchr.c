#include "main.h"

/**
  * _strchr- locates first occurence of a character in a string
  * @s: the string to search
  * @c: character to find
  * Return: pointer to the first chracter 'c' of string 's'
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
