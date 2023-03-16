#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - Multiplies two positive integers and prints the result
 * @num1: The first integer
 * @num2: The second integer
 *
 * Return: 0 if successful
 */
int multiply(int num1, int num2) 
{
    int result = num1 * num2;
    printf("%d\n", result);
    return 0;
}

/**
 * is_number - Checks if a string contains only digits
 * @str: The string to check
 * 
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_number(char *str) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (!isdigit(str[i])) 
        {
            return 0;
        }
        i++;
    }
    return 1;
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments array
 * 
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
    int num1, num2;

    if (argc != 3) 
    {
        fprintf(stderr, "Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    if (!is_number(argv[1]) || !is_number(argv[2])) 
    {
        fprintf(stderr, "Error: Arguments must be integers\n");
        return 1;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    multiply(num1, num2);

    return 0;
}
