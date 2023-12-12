#include <stdio.h>

/**
 * add - adds two integers
 * @a: first integer
 * @b: secomd integer
 * Return: addition of two integers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: subtraction of two integers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integer
 * @a: first integer
 * @b: second integer
 * Return: multiplication of the integers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - division of two integers
 * @a: first integer
 * @b: second integer
 * Return: division of the integers
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	else
		return (a / b);
}

/**
 * mod - remainder of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	else
		return (a % b);
}
