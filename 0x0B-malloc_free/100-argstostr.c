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
	int i;
	int m, n;
	int k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++)
			i++;
	}
	i += (ac + 1);
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++)
		{
			s[k] = av[m][n];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
