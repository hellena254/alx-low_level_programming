#include "main.h"
#include <string.h>

/**
 * puts2()- print every other character of a string
 * @str: pointer to a character
 */

void  puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
