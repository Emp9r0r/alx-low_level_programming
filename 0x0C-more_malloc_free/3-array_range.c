#include <stdlib.h>
#include "main.h"

/**
 * *array_range - to creates an array of integers
 * @min: The minimum range of values stored
 * @max: The maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *j;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	j = malloc(sizeof(int) * size);

	if (j == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		j[k] = min++;

	return (j);
}
