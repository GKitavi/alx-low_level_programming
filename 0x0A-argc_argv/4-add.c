#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_string - checks string
 * @s: string to check
 *
 * Return: Always 0
 */
int check_string(char *s)
{
	unsigned int i = 0;

	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	int sum = 0;

	while (i < argc)
	{
		if (check_string(argv[i]))
		{
			j = atoi(argv[i]);
			sum += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
