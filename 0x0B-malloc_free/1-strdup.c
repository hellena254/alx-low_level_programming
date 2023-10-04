#include "main.h"

/**
 * _strdup()- returna a pointer to a string which is a duplicate
 *
 * @str: pointer to a char
 * Return: null or a pointer to the memory space
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the duplicated string*/
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	/*copy content of input string to the duplicate*/
	for (i = 0; i <= len; i++)
		ptr[i] = str[i];

	return (ptr);
}
