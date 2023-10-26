#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from n to m
 * @n: The first parameter
 * @m: The second parameter
 *
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int c = 0;

	while (result > 0)
	{
		c += result & 1;
		result >>= 1;
	}

	return (c);
}
