#include "main.h"

/**
 * sqrt_check - Helper function to check for natural square root
 * @n: The number to find the square root of
 * @i: The current integer to check as a possible square root
 *
 * Return: The square root of n if it exists, otherwise -1
 */
int sqrt_check(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_check(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_check(n, 0));
}
