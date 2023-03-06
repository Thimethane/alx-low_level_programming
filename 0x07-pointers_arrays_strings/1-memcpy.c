#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: memory area destination to copy
 * @src: memory area souce to copy from
 * @n: number of bytes
 * Return: returns to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (ptr);
}
