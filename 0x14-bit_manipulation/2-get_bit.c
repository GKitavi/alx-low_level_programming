#include "main.h"

/**
 * get_bit - returns bit value
 * @n: number to check
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
