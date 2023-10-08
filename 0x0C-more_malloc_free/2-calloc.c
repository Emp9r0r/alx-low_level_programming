#include "main.h"
#include <stdlib.h>

/**
  * _calloc - ...
  * @ememb: number of bytes  members
  * @size: The size of bytes
  *
  * Return: ...
  */
void *_calloc(unsigned int ememb, unsigned int size)
{
	int a = 0, b = 0;
	char *d;

	if (ememb == 0 || size == 0)
		return (NULL);

	a = ememb * size;
	d = malloc(b);

	if (d == NULL)
		return (NULL);

	while (a < b)
	{
		d[a] = 0;
		a++;
	}

	return (d);
}
