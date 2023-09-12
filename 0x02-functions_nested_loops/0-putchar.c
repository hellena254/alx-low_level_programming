#include "main.h"

/**
  * main - entry point
  *
  * Description: prints _putchar, followed by a new line
  *
  * Return: Always 0
 */

int main(void)
{
	char putStr[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(putStr[i]);

	_putchar('\n');

	return (0);
}
