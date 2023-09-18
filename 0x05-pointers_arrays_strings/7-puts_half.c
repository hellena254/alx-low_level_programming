#include "main.h"
#include <string.h>

/**
 * puts_half()- prints half of a string
 * @str: pointer to a character
 */

void puts_half(char *str)
{
	int i, length;

	length = strlen(str);
	i = length / 2;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		++i;
	}
	putchar('\n');
}
