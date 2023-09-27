#include "main.h"

/**
 * is_palindrome()- check if a string is palindrome
 * @s: pointer to a character
 * Return: Always 0
 */

int is_palindrome(char *s)
{
	int length;

	length = strlen(s);
	return (is_palindrome_recursive(s, 0, length - 1));
}

/**
 * is_palindrome_recursive()- checks if a string is recursive
 * @s: pointer to a character
 * @i: integer
 * @j: integer
 *
 * Return: Always 0
 */

int is_palindrome_recursive(char *s, int i, int j)
{
	/* if string is empty or has only one char its not palindrome*/
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);

	return (is_palindrome_recursive(s, i + 1, j - 1));
}
