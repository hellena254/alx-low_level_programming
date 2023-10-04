#include "main.h"

/**
 * str_concat()- function that concatenates two strings
 *
 * @s1: pointer to a character
 * @s2: pointer to a character
 * Return: pointer to the concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*calculate length of both input strings*/
	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/*Allocate memory to the concatenated string*/
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	/* Copy the content of s1 and s2 to the new string*/
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (i = 0; i < len2; i++)
		concat[i] = s2[i];

	/* null-terminate the concat string*/
	concat[len1 + len2] = '\0';

	return (concat);
}
