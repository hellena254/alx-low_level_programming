#include "main.h"

/**
 * _putchar()- prints a character to the standard output
 * @c: character
 * return: the character
 */

void _putchar(char c)
{
	return (write(1, &c, 1));
}
