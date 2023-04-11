#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns pointer to a newly allocated space
 * @str: string
 *
 * Return: string
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	m = malloc(sizeof(char) * j + 1);
	if (m == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		m[i] = str[i];
	return (m);
}
