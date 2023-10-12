#include "variadic_functions.h"

/**
 * print_char- print type char elements
 *
 * @item: va_list passed to function
 */

void print_char(va_list item)
{
	int value;

	value = va_arg(item, int);
	printf("%c", value);
}


/**
 * print_int - print int type element from va_list
 * @item: va_list passed to function
 */

void print_int(va_list item)
{
		printf("%d", va_arg(item, int));
}


/**
 * print_float - print float type element from va_list
 * @item: va_list passed to function
 */
void print_float(va_list item)
{
		printf("%f", va_arg(item, double));
}

/**
 * print_str - print string element from va_list
 * @item: va_list passed to function
 */
void print_str(va_list item)
{
	char *s;

	s = va_arg(item, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - print anything passed if char, int, float, or string.
 * @format: string of formats to use and print
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *sep;

	storage[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstr },
		{ "i", _printint }
	};

	i = 0;
	separator = "";
	va_start(args, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", separator);
			storage[j].f(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
