#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @f: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int f)
{
	int x;

	x = 0;
	while (x < f && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < f)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
