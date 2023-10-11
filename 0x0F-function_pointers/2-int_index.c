#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Find the index of the first element in the specific condition.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to function (one of three from the main program).
 *
 * Return: The index first element function returns true.
 * If no such element is found, the function returns -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (m = 0; m < size; m++)
			if (cmp(array[m]))
				return (m);
	}

	return (-1);
}
