#include "main.h"

/**
 * set_bit - Sets the value of a bit a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set a value at.
 *
 * Return: -1 on error, 1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
