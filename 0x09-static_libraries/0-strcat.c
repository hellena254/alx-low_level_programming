#include "main.h"

/**
 * _strcat()- concatenate two strings
 * @dest: first pointer to a character
 * @src: second pointer to a character
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
