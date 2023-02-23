#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char i;
	int value;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			value = 1;
		else
			value = 0;
	}
	return (value);
