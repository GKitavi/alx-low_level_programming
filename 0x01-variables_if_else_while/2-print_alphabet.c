#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 10; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0)
}
