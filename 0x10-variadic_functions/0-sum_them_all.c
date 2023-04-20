#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum
 * @n: number of parameterd
 * @...: A variable number of parameters
 *
 * Return: if n == 0, return 0 otherwise return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list as;

	if (n == 0)
		return (0);
	va_start(as, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(as, int);
	va_end(as);
	return (sum);
}
