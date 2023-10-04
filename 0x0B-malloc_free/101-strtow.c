#include "main.h"

/**
 * is_space - checks if a character is a space, tab, or a newline
 * @c: character to check
 *
 * Return: 1 if char is a space, tab or newline
 */

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words- counts the number of words in a string
 * @str: input string
 *
 * Return: number of words in the string
 */

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (!is_space(*str))
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	int word_count, in_word, word_length, i, j;
	char *start = str;
	char **result;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	result = malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);

	i = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_space(*str))
		{
			if (!in_word)
			{
				in_word = 1;
				start = str;
			}
		}
		else
		{
			if (in_word)
			{
				word_length = str - start;
				result[i] = malloc((word_length + 1) * sizeof(char));
				if (result[i] == NULL)
				{
					for (j = 0; j < i; j++)
						free(result[j]);
					free(result);
					return (NULL);
				}
				strncpy(result[i], start, word_length);
				result[i][word_length] = '\0';
				i++;
				in_word = 0;
			}
		}
		str++;
	}

	if (in_word)
	{
		word_length = str - start;
		result[i] = malloc((word_length + 1) * sizeof(char));
		if (result[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(result[j]);
			free(result);
			return (NULL);
		}
		strncpy(result[i], start, word_length);
		result[i][word_length] = '\0';
		i++;
	}

	result[i] = NULL;

	return (result);
}
