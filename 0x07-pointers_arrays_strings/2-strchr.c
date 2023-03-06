#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: an input string to search in 
 * @c: an input character to locate into string s
 * Return: returns point to c position
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
