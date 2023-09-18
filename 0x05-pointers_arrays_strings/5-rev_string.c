#include "main.h"
#include <string.h>

/**
 * rev_string()- reverse a string
 * @s: pointer to a character
 */

void rev_string(char *s)
{
	char temp;
	int length, a, b;

	length = strlen(s);
	a = 0;
	b = length - 1;

	while (a < b)
	{
		/* swap the characters*/
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;

		/* move a and b toward each other*/
		a++;
		b--;
	}
}
