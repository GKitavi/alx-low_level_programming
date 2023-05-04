#include "main.h"

/**
 * flip_bits - returns number of bits to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int j = 0;
	unsigned long int c;
	unsigned long int d = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = d >> i;
		if (c & 1)
			j++;
	}

	return (j);
}
