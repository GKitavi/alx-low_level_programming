#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concanates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		j++;
	}

	while (s2[i] != '\0')
	{
		i++;
		k++;
	}

	t = malloc(sizeof(char) * (j + k + 1));
	if (t == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		t[i] = s1[i];
	}
	for (1 = 0; i < k; i++)
	{
		t[i + j] = s2[i];
	}
	t[i + j] = '\0';
	return (t);
}
