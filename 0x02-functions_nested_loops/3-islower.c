#include "main.h"

/**
 * _islower.c - check if char is lowercase
 *
 * Return: 1 if char is lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
