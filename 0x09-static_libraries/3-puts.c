 #include "main.h"

/**
 * _puts - prints a string, followed by a newline to stdout.
 * @str: an input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
