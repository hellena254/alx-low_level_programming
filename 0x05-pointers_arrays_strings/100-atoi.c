#include "main.h"
#include <limits.h>

/**
 * _atoi()- convert a string to an integer
 * @s: pointer to a string
 * Return: the integer
 */

int _atoi(char *s)
{
	int sign, num, result;

	sign = 1;
	num = 0;

	/* skip leading whitespace characters*/
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	/* handle the sign character if present*/
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		/*check the overflow before adding the next digit*/
		if (num > (INT_MAX - (*s - '0')) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		num = num * 10 + (*s - '0');
		s++;
	}

	/*Apply the sign*/
	result = num * sign;
	return (result);
}
