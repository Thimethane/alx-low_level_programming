#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 84
#define MIN_ASCII_VALUE 33
#define MAX_ASCII_VALUE 126
#define REQUIRED_SUM 2772

/**
 * main - generates random valid passwords for the program
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1] = {0};
	int sum = 0, i;

	srand(time(0));

	while (sum != REQUIRED_SUM)
	{
		for (i = 0; i < PASSWORD_LENGTH && sum REQUIRED_SUM; i++)
		{
			password[i] = MIN_ASCII_VALUE + (rand() % (MAX_ASCII_VALUE - MIN_ASCII_VALUE + 1));
			sum += password[i];
		}
	}

	printf("%s", password);

	return (0);
}
