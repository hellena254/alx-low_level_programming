#include <stdio.h>
/**
 * main- entry point
 * Description: The Fizz-Buzz test
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
	if ((i % 3) == 0)
		printf("Fizz ");
	else if ((i % 5) == 0)
		printf("Buzz ");
	else if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz ");
	else
		printf("%d ", i);
	}

	printf("\n");

	return (0);
}
