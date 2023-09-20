#include "main.h"

/**
  * _strncat()- concatenates two strings.
  * @dest: first pointer to a char
  * @src: second pointer to a chari
  * @n: integer parameter
  * Return: pointer to the resulting string
  */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
