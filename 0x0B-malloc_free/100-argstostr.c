#include "main.h"

/**
 * *argstostr()-function that concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: pointer to an array of string
 * Return: pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i;
	int total_length = 0;
	int position = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*Calculate total length needed*/
	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	/*Allocate memory for the concatenated string*/
	concat = malloc((total_length + 1) * sizeof(char));

	/*Insufficient memory*/
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		/*copy argc to the concat string*/
		strcpy(concat + position, av[i]);
		position += strlen(av[i]);

		/* Add a newline*/
		concat[position++] = '\n';
	}

	/* null-terminate the concat string*/
	concat[position] = '\0';

	return (concat);
}
