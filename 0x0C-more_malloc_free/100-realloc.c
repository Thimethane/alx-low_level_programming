#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: If successful, a pointer to the newly reallocated memory block. Otherwise, NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    if (new_size == 0 && ptr != NULL) {
        free(ptr);
        return (NULL);
    }

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
        return (malloc(new_size));

    new_ptr = malloc(new_size);

    if (new_ptr == NULL)
        return (NULL);

    memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));
    free(ptr);

    return (new_ptr);
}
