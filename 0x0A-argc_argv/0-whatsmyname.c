#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unused(argc);
	printf("%s\n", argv[0]);
	return (0);
}
