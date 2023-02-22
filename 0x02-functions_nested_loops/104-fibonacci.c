#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned int f1 = 1, f2 = 2, f3;

	printf("%u, %u", f1, f2);

	for (count = 2; count < 98; count++)
	{
		f3 = f1 + f2;
		printf("%u, ", f3);
		f1 = f2;
		f2 = f3;
	}
	printf("\n");

	return (0);
}
