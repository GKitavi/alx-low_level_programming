#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src
 * @dest: memory where it's stored
 * @src: memory area where is copied
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
