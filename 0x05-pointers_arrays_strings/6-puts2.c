#include "main.h"
#include <string.h>

/**
 * puts2()- print every other character of a string
 * @str: pointer to a character
 */

void  puts2(char *str)
{
	int length, i;

	length = strlen(str);

	for (i = 0; i <= length; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
