#include "main.h"

/**
 * _sqrt_recursion()- return the square root of a number
 * @n: integer parameter
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt(n));
}
