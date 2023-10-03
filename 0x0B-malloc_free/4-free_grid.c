#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Deallocates a 2D integer array
 * @grid: Pointer to the 2D array
 * @height: Height (number of rows) of the array
 *
 * Description: This function releases the dynamically allocated memory
 * used by a 2D integer array, preventing memory leaks.
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
