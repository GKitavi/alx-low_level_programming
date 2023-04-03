#include "main.h"

/**
 * _strpbrk - Searches string for any set of byte
 * @s: string input
 * @accept: input
 * return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
