#include "main.h"

/**
 * print_alphabet_x10()- prints lowercase alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	int num = 1;
	char letter = 'a';

	/* Execute the loop ten times */
	while (num <= 10)
	{
		/*print the alphabets */
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');

		/*Reset letter to 'a'*/
		letter = 'a';
		num++;
	}
}
