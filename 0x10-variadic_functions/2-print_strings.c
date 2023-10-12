#include "variadic_functions.h"

/**
 * print_strings- a function that prints a string followed by a newline
 *
 * @separator: the string to be printed between the string
 * @n: number of strings printed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *value;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char *);
		if (value == NULL)
			printf("(nil)");
		else
			printf("%s", value);

		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
