#include <stdio.h>
#include <stdlib.h>

/**
  * main- entry point
  *
  * Description:print minimum number of coins to make change
  * @argc: argument count
  * @argv: argument passed as an array of strings
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int cents, i;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", count);
	return (0);
}
