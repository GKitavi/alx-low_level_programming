#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates array
 * @size: size of array
 * @c: char to assign
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
