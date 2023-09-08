#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	/* loop through the lowercase alphabets */
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
