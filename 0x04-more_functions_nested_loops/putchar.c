#include "main.h"

/**
 *_putchar(): print characters
 *@c: character parameter
 * Return - Always 0
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
