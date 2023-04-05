#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power y
 * @x: input value
 * @y: input power
 *
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	i *= _pow_recursion(x, y - 1);

	return (i);
}
