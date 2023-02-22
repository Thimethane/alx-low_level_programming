#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int main(void)
{
	char word[20] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);

	_putchar('\n');

	return (0);
}
