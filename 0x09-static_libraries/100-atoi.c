#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = total * 10 + *s - '0';
		}

		else if (null_flag)
			break;
		s++;
	}

	if (sign < 0)
		total = (-total);

	return (total);
}