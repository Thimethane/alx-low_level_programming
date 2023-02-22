#include "main.h"

/**
 * print_sign - prints the sign of number
 * @n: the number to check
 *
 * Return: 1 and '+' if n is positive, 0 and "0" if n zero
 * -1 and '-' if n is less than zero.
 */
int print_sign(int n)
{
	int value;

	if  (n > 0) 
	{
		value = 1;
		_putchar('+');
	}
	else if (n == o)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}

