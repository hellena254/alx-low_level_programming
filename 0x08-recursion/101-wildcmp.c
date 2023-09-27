#include "main.h"

/**
 * wildcmp()- recursive function to compare two strings
 * @s1: pointer to a character
 * @s2: pointer to a character
 *
 * Return: Always 0
 */

int wildcmp(char *s1, char *s2)
{
	/*if both strings are empty, they match*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/*If s2 has a wildcard '*', it can represent zero or more characters*/
	if (*s2 == '*')
	{
		/*Try matching s1 with s2, skipping the '*', or advancing s2*/
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}
	return (0);
}
