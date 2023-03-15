#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: an input string to search in
 * @needle: an input string to locate
 * Return: points at the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		if (*h == *n)
		{
			char *h2 = h;
			char *n2 = n;

			while (*h2 && *n2 && *h2 == *n2)
			{
				h2++;
				n2++;
			}
			if (*n2 == '\0')
				return (h);
		}
		h++;
	}
	return (NULL);
}
