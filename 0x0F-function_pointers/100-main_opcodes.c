#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int bytes, i;
    unsigned char *opcodes = (unsigned char *) main;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    for (i = 0; i < bytes; i++)
    {
        printf("%.2x", *(opcodes + i));

        if (i != bytes - 1)
            printf(" ");
    }

    printf("\n");
    return (0);
}
