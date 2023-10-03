#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Generates a character array of a given size
 *
 * @size: Size of the array to be created.
 * @n: The character used for initialization.
 * Description: creat array of size size and assign char n
 * Return: A pointer to the created character array.
 */
char *create_array(unsigned int size, char n)
{
	unsigned int k;
	char *a;

	if (size <= 0)
		return (0);

	a = malloc(sizeof(char) * size);

	if (a == 0)
		return (0);

	for (k = 0; k < size; k++)
		*(a + k) = n;

	*(a + k) = '\0';

	return (a);
}
