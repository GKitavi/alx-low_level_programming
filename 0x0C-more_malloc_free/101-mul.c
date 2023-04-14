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

