#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed
 * @s: Starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: S
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
