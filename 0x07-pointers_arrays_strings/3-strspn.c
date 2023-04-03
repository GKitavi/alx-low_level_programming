#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: initial segment input
 * @accept: bytes in s
 * return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, n, check;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				j++;
				check = 1;
			}
		}
		

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
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
