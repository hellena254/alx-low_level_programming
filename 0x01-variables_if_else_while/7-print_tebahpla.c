#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char reverse_letters = 'z';

	while (reverse_letters <= 'a')
	{
		putchar(reverse_letters);
		reverse_letters--;
	}
	putchar('\n');
	return (0);
}
