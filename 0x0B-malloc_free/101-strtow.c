#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * help - helper function
 * @s: string
 *
 * Return: value numbers
 */
int help(char *s)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '')
			j = 0;
		else if (j == 0)
		{
			j = 1;
			k++;
		}
	}
	return (k);
}
/**
 * strtow - splits string into words
 * @str: string
 *
 * Return: string in words
 */
char **strtow(char *str)
{
	int i, w, start, end;
	int j = 0;
	int k = 0;
	int l = 0;
	char **m, *t;

	while (*(str + l))
		j++;
	w = help(str);
	if (w == 0)
		return (NULL);
	m == (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		if (str[i] == '' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				t = (char *) malloc(sizeof(char) * (j + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				m[k] = t - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}
	m[k] = NULL;
	return (m);
}
