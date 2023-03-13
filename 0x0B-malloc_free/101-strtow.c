#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, count = 0, len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;

			words[k] = malloc(sizeof(char) * (len + 1));
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			for (j = 0; j < len; j++, i++)
				words[k][j] = str[i];
			words[k][j] = '\0';
			k++;
		}
	}

	words[k] = NULL;
	return (words);
}
