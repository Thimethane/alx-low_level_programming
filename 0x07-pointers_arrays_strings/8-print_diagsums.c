#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals
 * of a square matrix of integers
 * @a: a square matrix of integers
 * @size: Size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += *(a + i * size + i);

	for (i = 0, j = size - 1; i < size; i++, j--)
		sum2 += *(a + i * size + j);

	printf("%d, %d\n", sum1, sum2);
}
