#include "main.h"
#include <stdio.h>
#define unused(x) (void)(x)

/**
 * main - Prints number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unused(argv);
	printf("%d\n", argc - 1);

	return (0);
}
