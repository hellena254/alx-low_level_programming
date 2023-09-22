#include "main.h"

/**
 * rot13()- encode using rot13
 * @str: pointer to a character
 * Return: characters return
 */

char *rot13(char *str)
{
	int i = 0;
	int j;
	char init[] = "ABCDEFGHIJKLMNQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(str + i) == init[j])
			{
				*(str + i) = new[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
