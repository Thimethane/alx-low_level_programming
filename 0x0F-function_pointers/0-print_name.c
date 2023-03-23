#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - prints a name using a given function
 * @name: pointer to name string
 * @f: pointer to function that takes a char pointer argument
 *
 * Description: This function prints a label "Name: " followed by the name,
 * using the function pointed to by @f to format the name. The function pointed
 * to by @f must take a char pointer argument and have no return value.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
	return;

    f(name);
}
