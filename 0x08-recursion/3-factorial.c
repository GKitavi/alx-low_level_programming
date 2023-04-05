#include "main.h"

/**
 * factorial - Returns factorial of the given number
 * @n: number to get facorial
 *
 * Return: n factorial
 */
int factorial(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	i *= factorial(n - 1);

	return (i);
}
