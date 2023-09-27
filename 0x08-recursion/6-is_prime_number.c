#include "main.h"

/**
  * is_prime_number()- check if number is prime
  * @n: integer
  * Return: Always 0
  */

int is_prime_number(int n)
{
	/*numbers less than 1 or equal to 1 are not prime*/
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (!is_divisible(n, n - 1));
}

/**
 * is_divisible()-check if a number is divisible
 * @n: first integer parameter
 * @j: second integer parameter
 * Return: Always 0
 */

int is_divisible(int n, int j)
{
	if (j == 1)
		return (0);
	if (n % j == 0)
		return (1);
	return (is_divisible(n, j - 1));
}
