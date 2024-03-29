#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to allocate
 *
 * Return: Pointer to allocated memory
 * If malloc fails, the function causes normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
    {
        exit(98);
    }

    return (ptr);
}
