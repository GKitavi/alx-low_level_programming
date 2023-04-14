#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - Checks string
 * @s: string to check
 *
 * Return: 0 if a non digit, otherwise 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 *
 * Return string length
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * error - handles errors for main
 */
void error(void)
{
	printf("Error\n")
		exit(98);
}
/**
 * main - multiplies two numbers which are positive
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, l, c, d1, d2;
	int *r;
	int a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	l = len1 + len2 + 1;
	r = malloc(sizeof(int) * l);
	if (!r)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		d1 = s1[len1] - '0';
		c = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			d2 = s2[len2] - '0';
			c += r[len1 + len2 + 1] + (d1 * d2);
			r[len1 + len2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			r[len1 + len2 + 1] += c;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (r[i])
			a = 1;
		if (a)
			_putchar(r[i] + '0');
	}
	if (!a)
		_putchar('0');
	-putchar('\n')
		free(r);
	return (0);
}
