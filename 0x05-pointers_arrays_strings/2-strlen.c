#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: string length to be calculated
 *
 * Return: s
 */
int _strlen(char *s)
{
	int j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}
