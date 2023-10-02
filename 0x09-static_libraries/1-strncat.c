#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most m bytes from src
 * @dest: input value
 * @src: input value
 * @m: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int m)
{
	int w;
	int v;

	w = 0;
	while (dest[w] != '\0')
	{
		w++;
	}
	v = 0;
	while (v < m && src[v] != '\0')
	{
	dest[w] = src[v];
	w++;
	v++;
	}
	dest[w] = '\0';
	return (dest);
}
