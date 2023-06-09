#include "main.h"
#include <stdlib.h>

/**
 * helper - helper function
 * @s: string to check
 *
 * Return: value numbers
 */
int helper(char *s)
{
	int x;
	int y = 0;
	int z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			z++;
		}
	}
	return (z);
}
/**
 * strtow - splits string into words
 * @str: string
 *
 * Return: string in words
 */
char **strtow(char *str)
{
	char **m, *t;
	int i, w, start, end;
	int k = 0;
	int l = 0;
	int c = 0;

	while (*(str + l))
		l++;
	w = helper(str);
	if (w == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				m[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	m[k] = NULL;

	return (m);
}
