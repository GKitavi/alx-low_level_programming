#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds 5 functions
 * @a: integer
 * @b: integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts
 * @a: integer
 * @b: integer
 *
 * Return: a and b difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies
 * @a: integer
 * @b: integer
 *
 * Return: Multiple of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: integer
 * @b: integer
 *
 * Return: Division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Modulos
 * @a: integer
 * @b: integer
 *
 * Return: Modulo of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
