#include "main.h"

/**
 * _pow_recursion()- return the value of x raised to power y
 * @x: first integer parameter
 * @y: second integer parameter
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	/*compute x^y as x times x^(y-1)*/
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
