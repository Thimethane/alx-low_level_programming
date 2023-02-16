#include <unistd.h>
/**
 * main - Prints to standard error
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19",
		29);

	return (1);
}
