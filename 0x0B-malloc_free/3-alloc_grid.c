#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates and returns a pointer to a 2-dimensional
 * array of integers with the specified number of rows and columns.
 *
 * @width: Number of columns in the 2D array.
 * @height: Number of rows in the 2D array.
 *
 * Return: A double pointer to the allocated 2D integer array.
 */
int **alloc_grid(int width, int height)
{
	int **q;
	int m, n, o, pc;

	pc = 0;
	if (width <= 0 || height <= 0)
		return (0);

	q = malloc(height * sizeof(int *));
	if (q == 0)
		return (0);
	for (m = 0; m < height; m++)
	{
		*(q + m) = malloc(width * sizeof(int));
		if (*(q + m) == 0)
		{
			pc = 1;
			break;
		}
		for (n = 0; n < width; n++)
		{
			q[m][n] = 0;
		}
	}
	if (pc == 1)
	{
		for (o = 0; o <= m; o++)
		{
			free(*(q + o));
		}
		free(q);
	}
	return (q);
}
