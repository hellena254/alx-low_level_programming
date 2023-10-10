#include <stdio.h>

/**
 * main- entry point
 * Description: print the name of the file it was
 *	compiled from followed by a newline
 * Return: Always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
