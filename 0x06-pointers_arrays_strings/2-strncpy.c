#include "main.h"

/**
 * _strncpy()- cpoies a string
 * @dest: pointer to a char
 * @src: pointer ro a char
 * @n: pointer to an integer
 * Return: pointer to copied strings
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
