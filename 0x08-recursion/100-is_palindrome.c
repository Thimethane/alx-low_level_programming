#include "main.h"

/**
 * is_palindrome_recursion - checks if a string is a palindrome
 * @s: input string
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_recursion(char *s, int start, int end)
{
	if (s[start] == '\0' || start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_recursion(s, start + 1, end - 1));
}

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - wrapper function for is_palindrome_recursion
 * @s: input string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	return (is_palindrome_recursion(s, 0, len - 1));
}
