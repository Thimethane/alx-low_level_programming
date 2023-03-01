#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array of integers
 * @n: Number of elements in the array
 */
void reverse_array(int a, int n)
{
	int i = 0, int aux;

	while (n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
