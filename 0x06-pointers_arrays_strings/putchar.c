#include <unistd.h>

/**
 * _putchar()- print a single digit to the standard output
 * @c: character
 * Return: print the output
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
