#include "main.h"

/**
 * clear_bit - Sets the value of a bit a given index to 0.
 * @n: A pointer to the bit.
 * @index: The index to set a value at.
 *
 * Return: -1 on error, 1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = ~(1 << index);
	*n = *n & mask;
	return (1);
}
