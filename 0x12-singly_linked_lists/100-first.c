#include <stdio.h>
/**
 * print_message - Prints a message before the main function is executed.
 *
 * Description: This function is executed automatically before the main
 *              function is executed and prints a message to the standard
 *              output.
 *
 * Return: Nothing
 */
void __attribute__((constructor)) print_message(void);

/**
 * print_message - Prints a message before the main function is executed.
 */
void print_message(void)
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}
