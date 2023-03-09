#include "main.h"

/**
 * is_prime - checks if number is prime
 * @n: input number
 * @i: iterator
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0 && i < n)
		return (0);
	else if (i == n)
		return (1);
	else
		return (is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: input number
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
