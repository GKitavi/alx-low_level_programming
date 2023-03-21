#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 *
 * Return: Always 1 (Success)
 * On erro, -1 is returned
 */
int _putcgar(char c)
{
	return (write(1, &c, 1));
}
