#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: function _putchar with parameter c
 * prints _putchar, followed by a new line
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchar('\n');
	return (0);
}
