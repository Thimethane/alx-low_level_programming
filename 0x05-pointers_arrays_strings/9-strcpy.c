#include "main.h"

/**
 * _strcpy - Copies a string pointed to bya a src
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
