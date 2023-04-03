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
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accep[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		i++;
	}
	return (n);
}
