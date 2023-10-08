#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Allocates memory data using malloc
  * @q: the size to allocate number of bytes
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int q)
{
	void *c;

	c = malloc(q);

	if (c == NULL)
		exit(98);

	return (c);
}
