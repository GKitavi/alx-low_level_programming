#include "main.h"

int actual_prime_number(int n, int i);

/**
 * is_prime_number - return 1 if input is a prime number, otherwise 0
 * @n: input integer
 *
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - calculates a prime number
 * @n: number to be calculated
 * @i: iteration
 *
 * Return: 1 if prime number, 0 if not
 */
int actual_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime_number(n, n - 1));
}
