#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, i;
	char aux;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		aux = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = aux;
	}
}
