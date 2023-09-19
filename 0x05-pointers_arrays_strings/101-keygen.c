#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entry point
 * Description - generate random valid password
 * Return: Always 0 (Success)
 */

int main(void)
{
	int randNum;
	int i, j;

	srand(time(NULL));
	i = 0;

	for (j = 2772; j > 122; j++)
	{
		randNum = (rand() % 125) + 1;
		printf("%c", randNum);
		j -= randNum;
	}

	printf("%c", j);

	return (0);
