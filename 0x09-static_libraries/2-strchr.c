#include "main.h"

/**
 * _strchr -returns pointer to the first occurence
 * @s: string input
 * @c: character in s string
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
