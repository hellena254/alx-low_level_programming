#include "main.h"
#include <string.h>

/**
 * print_rev()- print a string in reverse
 * @s: pointer to a character
 */

void print_rev(char *s)
{
	int i, length;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
