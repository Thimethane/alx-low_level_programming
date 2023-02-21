#include <unistd.h>
#include "holberton.h"

/**
 * _putchar: - Function declaration
 *
 * Return: Always 1 (Success)
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main (void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
