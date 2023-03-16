#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }
    else
    {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);

        if (num1 <= 0 || num2 <= 0)
        {
            printf("Error\n");
            return (98);
        }

        result = num1 * num2;
        printf("%d\n", result);
        return (0);
    }
}
