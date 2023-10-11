#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Apply a specified function to each element of an integer.
 * @array: The input integer array to process.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 *
 * This function iterates through the 'array' and applies the 'action' function
 * each element. It does not return any value.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array && action)
		for (k = 0; k < size; k++)
			action(array[k]);
}
