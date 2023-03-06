#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: an input string
 * @accept: an  input character with to locate into string s
 * Return: Returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag = 0;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
		break;

	}
	return (count);
}
