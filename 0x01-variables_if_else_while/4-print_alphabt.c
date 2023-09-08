#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'q' && letters != 'e')
			putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
