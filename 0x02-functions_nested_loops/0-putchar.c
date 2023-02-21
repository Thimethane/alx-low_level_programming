#include <unistd.h>
#include <holberton.h>

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
