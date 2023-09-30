#include <ctype.h>

/**
 *_isalpha- check for alphabetic characters
 *
 *@c: parameter passing through the function
 *
 * Return: 1 if c is a letter, 0 if its not
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
