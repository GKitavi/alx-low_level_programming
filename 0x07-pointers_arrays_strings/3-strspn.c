#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: initial segment input
 * @accept: bytes in s
 * return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (0);
		}
		s++;
	}
	return (0);
}
