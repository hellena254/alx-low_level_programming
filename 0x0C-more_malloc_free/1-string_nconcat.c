#include "main.h"

/**
 * *string_nconcat()- concatenates two strings, n bytes of s2 only
 *
 * @s1: pointer to the first array of strings
 * @s2: pointer to the second array of strings
 * @n: size of allocated bytes for s2
 *
 * Return: a pointer to the newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2;

	/*Null inputs we treat as empty strings*/
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";

	/*calculate length of s1 and s2*/
	len1 = strlen(s1);
	len2 = strlen(s2);

	/*Use entire s2 if n >= to length of s2*/
	if (n >= len2)
		n = len2;

	/*Allocate memory*/
	concat = malloc(sizeof(char) * len1 + n + 1);

	if (concat == NULL)
		return (NULL);

	/*copy s1 into concat string*/
	strcpy(concat, s1);

	/*concat the first n char of s2*/
	strncat(concat, s2, n);

	return (concat);
}
