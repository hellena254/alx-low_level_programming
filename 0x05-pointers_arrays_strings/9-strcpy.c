#include "main.h"
#include <string.h>

/**
 * _strcpy()- copies the string pointed from source to destination
 * @dest: pointer to the destination buffer
 * @src: pointer to the source
 * Return: destination value
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
