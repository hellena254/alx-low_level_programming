#include <ctype.h>
#include "main.h"

/**
 * _isdigit()- check for a digit 0 through 9
 * @c: integer parameter
 * Return: 1 if digit 0 otherwise
 */

int _isdigit(int c)
{
	for (c = 0; c <= 9; c++)
	{
		if (isdigit(c))
			return (1);
		else
			return (0);
	}
}
