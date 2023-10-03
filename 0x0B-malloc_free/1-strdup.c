#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Allocates memory for and creates a duplicate of the
 * provided string.
 *
 * @str: The input string to be duplicated.
 *
 * Return: A pointer to the newly allocated duplicated string.
 */
char *_strdup(char *str)
{
	int j, k;
	char *b;

	if (str == NULL)
		return (0);

	j = 0;
	while (*(str + j))
		j++;

	b = malloc(sizeof(char) * j + 1);

	if (b == 0)
		return (0);

	for (k = 0; str[k] != '\0'; k++)
	{
		*(b + k) = *(str + k);
	}
	return (b);
}
