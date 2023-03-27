#include "main.h"

/**
 * puts2 - Prints every other character of string
 * @str - Character to be printed
 *
 * Return: string
 */
void puts2(char *str)
{
	int j = 0;
	int m = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		j++;
	}
	m = j - 1;
	for (i = 0; i <= m; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
