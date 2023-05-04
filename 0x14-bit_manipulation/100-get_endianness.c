#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 for Big-endian, 1 little-endian.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (0);
}
