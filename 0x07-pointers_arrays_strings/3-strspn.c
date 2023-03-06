#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: an input string
 * @accept: an  input character with to locate into string s
 * Return: Returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				count++;
				break;
			}
			temp ++;
		}

		if (*temp == '\0')
			break;

		s++;
	}
	return (count);
}
