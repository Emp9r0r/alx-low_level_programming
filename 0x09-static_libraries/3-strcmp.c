#include "main.h"
/**
 * _strcmp - compare string values
 * @a1: input value
 * @a2: input value
 *
 * Return: a1[d] - a2[d]
 */
int _strcmp(char *a1, char *a2)
{
	int d;

	d = 0;
	while (a1[d] != '\0' && a2[d] != '\0')
	{
		if (a1[d] != a2[d])
		{
			return (a1[d] - a2[d]);
		}
	d++;
	}
	return (0);
}
