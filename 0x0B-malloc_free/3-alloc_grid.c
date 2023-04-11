#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to two dimensional arrays
 * @width: array width
 * @height: array height
 *
 * Return: Pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **c;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = (int **)malloc(sizeof(int *) * height);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		c[i] = (int *)malloc(sizeof(int) * width);

		if (c[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(c[j]);
			free(c);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			c[i][j] = 0;
	}
	return (c);
}
