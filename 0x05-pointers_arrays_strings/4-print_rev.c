#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string to be printed
 *
 * Return: string
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
