#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 
 * the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int i, sum = 0;

	srand(time(NULL));

	for (i = 0; i < 84; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	password[84] = 2772 - sum;

	printf("%s\n", password);

	return (0);
}
