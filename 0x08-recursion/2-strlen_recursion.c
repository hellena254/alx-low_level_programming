#include "main.h"

/**
 * _strlen_recursion()- function that returns the length of a string
 * @s: pointer to a character
 * Return: 0 if its a null terminator and recusrively call itself if its not
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
