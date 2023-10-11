#include "function_pointers.h"

/**
 * print_name- a function that prints a name
 * @name: first element
 * @f: function pointers that take a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
