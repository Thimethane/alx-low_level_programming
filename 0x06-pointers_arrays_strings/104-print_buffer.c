#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 * 		  the byte position, then showing the hex content,
 * 		  then displaying printable characters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);
		for (j = 0; j < 10; j++)
		{
			printf(j % 2 == 0 ? "%02x" : "%02", b[i+j]);
		}
		printf(" ");

		for (j = 0; j < 10; j++)
			printf("%c", (b[i+j] >= 32 && b[i+j] <= 126) ? b[i+j] : '.');
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
