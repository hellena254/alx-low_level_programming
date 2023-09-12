#include <ctype.h>

/**
 *_islower()- checks for lowercase characters using islower()
 *		and return 1 if lower and 0 if its not
 *
 * @c- parameter we are passing in the function
 *
 * Return: 1 if char is lowercase and 0 if its not
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
