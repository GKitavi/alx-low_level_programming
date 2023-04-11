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
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		j++;
	t = malloc(sizeof(char) * (i + j + 1));
	if (t == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		t[i] = s2[j];
		i++, j++;
	}
	t[i] = '\0';
	return (t);
}
