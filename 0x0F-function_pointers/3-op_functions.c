#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- returns the difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a and b
 * @a: first element
 * @b: second element
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of the division of a and b
 * @a: first element
 * @b: second element
 * Return: result of division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the remainder of the division
 * @a: first element
 * @b: second element
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
