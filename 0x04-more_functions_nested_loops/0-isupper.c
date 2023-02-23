#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char i = 'A';
	int value = 0;

	for (; i <= 'Z'; i++)
	{
		if (c == i)
		{
			value = 1;
			break;
		}
	}

	return (value);
