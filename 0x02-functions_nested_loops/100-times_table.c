#include "main.h"

/**
 * print_times_table: prints the n times table
 * @n: number of times the table to printed out
 *
 * Return: On success 0
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, product;

	for(i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
					_putchar(' ');
				else
					putchar(' ');

				printf("%d", product);
			}
		}
	_putchar('\n');
	}
}
