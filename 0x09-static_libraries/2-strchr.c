#include "main.h"

/**
 * _strchr - The entry point
 * @x: The input
 * @y: The input
 * Return: Always 0 (Success)
 */

char *_strchr(char *x, char y)
{
	int i = 0;

	for (; x[i] >= '\0'; i++)
	{
		if (x[i] == y)
			return (&x[i]);
	}
	return (0);
}
