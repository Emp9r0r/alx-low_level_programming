#include "main.h"

/**
 * char *_strcpy - The function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int z = 0;

	while (*(src + w) != '\0')
	{
		w++;
	}
	for ( ; z < w ; z++)
	{
		dest[z] = src[z];
	}
	dest[w] = '\0';
	return (dest);
}
