#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog.
 * @d: struct to initialize
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
    printf("Age: %f\n", d->age);
    printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
}
