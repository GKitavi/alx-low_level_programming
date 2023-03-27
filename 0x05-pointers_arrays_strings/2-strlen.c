#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: string length to be calculated
 *
 * Return: s
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s[count] != '\0'; ++count);

	return (count);
}
