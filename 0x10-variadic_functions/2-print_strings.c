#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints a string
 * @separator: string to be printed
 * @n: number of strings
 * @...: Variable
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list sa;
	char *s;

	va_start(sa, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(sa, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	va_end(sa);
	printf("\n");
}
