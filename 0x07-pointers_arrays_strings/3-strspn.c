#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment input
 * @accept: bytes in s
 * Return: unsigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[j] == '\0')
			return (n);
	}
	return (n);
}
