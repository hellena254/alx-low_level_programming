#include "main.h"
#include <stdbool.h>

/**
 * _separator- defines separators
 * @c: character parameter
 * Return: boolean
 */

bool _separator(char c)
{
	int i;
	char separator[] = "\t\n,;.!?\"(){}";

	for (i = 0; separator[i] != '\0'; i++)
	{
		if (c == separator[i])
			return (true);
	}
	return (false);
}
