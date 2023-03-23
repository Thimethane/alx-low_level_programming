#include "variadic_functions.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);

	while (ptr != NULL && *ptr != '\0')
	{
		switch (*ptr)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
			default:
				ptr++;
				continue;
		}

		if (*(ptr + 1) != '\0')
		{
			printf(", ");
		}

		ptr++;
	}

	va_end(args);
	printf("\n");
}
