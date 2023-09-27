#include "main.h"

/**
 * _sqrt_recursion()- return the square root of a number
 * @n: integer parameter
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursion(n, 0));
}

/**
  * sqrt_recursion()- recursive helper function
  * @n: integer for which we want to find the square root
  * @j: current guess for the square root
  *
  * Return: Always 0
  */

int sqrt_recursion(int n, int j)
{
	/* If n < 0, return -1*/
	if (n < 0)
		return (-1);

	/* if square of j = n, return j*/
	if ((j * j) == n)
		return (j);

	/*If square of j > n, then it's not a whole number*/
	if ((j * j) > n)
		return (-1);

	/*Recursively increment the guess and continue searching*/
	return (sqrt_recursion(n, j + 1));
}
