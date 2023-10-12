#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its arguments
 *
 * @n: a constant variable
 *
 * Return: if n==0 return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum;

	va_start(args, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
