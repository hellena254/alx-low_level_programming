#include "main.h"

/**
 * factorial()- return the factorial of a given number
 * @n: integer parameter
 *
 * Return: 0 if n < 0, 1 if n = 0 and factorial if n > 0
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (0);
	}

	return (0);
}
