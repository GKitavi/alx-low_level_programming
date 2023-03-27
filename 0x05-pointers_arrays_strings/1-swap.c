#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
