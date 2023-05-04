#include "main.h"

/**
 * flip_bits - Counts number of bits needed to be flipped
 * @n: The number
 * @m: number to flip n to.
 *
 * Return: The number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
