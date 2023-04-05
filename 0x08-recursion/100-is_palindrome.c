#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is palindrome
 * @s: string o check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns string length
 * @s: string to be calculated
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks the character for palindrome
 * @s: string to be checked
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
