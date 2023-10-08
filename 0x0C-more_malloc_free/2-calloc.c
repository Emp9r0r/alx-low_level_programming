#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @w: memory area that will be filled
 * @x: char to do the  copy
 * @y: The number of times to copy x
 *
 * Return: pointer to the memory area k
 */
char *_memset(char *w, char x, unsigned int y)
{
	unsigned int f;

	for (f = 0; f < y; f++)
	{
		w[f] = x;
	}

	return (w);
}

/**
 * *_calloc - The allocates memory for an array
 * @nmemb: The number of elements in an array
 * @size: the size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
