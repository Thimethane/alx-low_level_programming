#include "main.h"

/**
 * swap_int - swaps valuee of two integers
 * @a: An input integer pointer
 * @b: an input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
