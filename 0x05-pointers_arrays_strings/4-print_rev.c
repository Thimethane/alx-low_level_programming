#include "main.h"

/**
 * prin_rev - prints a string, in reverse.
 * @s: An input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	len--;

	while(len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}
