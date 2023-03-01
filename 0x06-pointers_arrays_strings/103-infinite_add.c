#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: THe buffer size.
 * Return: If r can store the sum - a pointer to the result.
 * 	   If r can not store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1 = 0, len2 = 0, sum = 0, carry = 0;

	while (n1[len1])
		len++;
	while (n2[len2])
		len++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	r[--size_r] = '\0';
	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		carry = sum > 9;
		r[k--] = (sum % 10) + '0';
	}
	return (r + k + 1);
}
