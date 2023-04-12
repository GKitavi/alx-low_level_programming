#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concanetas all arguments
 * @ac: argument counts
 * @av: array of arguments
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
			s[k++] = '\n';
	}
	return (s);
}
