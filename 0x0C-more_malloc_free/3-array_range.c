#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value to include in the array.
 * @max: The maximum value to include in the array.
 *
 * Return: If successful, a pointer to the newly created array. Otherwise, NULL.
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, i;

    if (min > max)
        return (NULL);

    size = max - min + 1;
    arr = malloc(size * sizeof(int));

    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = min + i;

    return (arr);
}
