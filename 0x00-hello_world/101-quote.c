#include <unistd.h>
/**
 * main - Prints to standard error
 *
 * Return: Always 1.
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof(msg) - 1);

	return (1);
}
