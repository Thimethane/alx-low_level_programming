#include "main.h"

/**
 * _memset - Fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: Returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	while (n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}
