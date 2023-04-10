#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimun number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j;
	int result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (j = 0; j < 5 && i > 0; j++)
	{
		while (i >= coins[j])
		{
			result++;
			i -= coins[j];
		}
	}
	printf("%d\n", result);

	return (0);
}
