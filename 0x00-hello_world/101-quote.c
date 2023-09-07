#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print without using printf or puts
 *
 * Return: 1 (error)
 */

int main(void)
{
	char words[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, words, 59);
	return (1);
}
