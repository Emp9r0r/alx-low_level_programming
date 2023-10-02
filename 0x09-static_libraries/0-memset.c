#include "main.h"
/**
 * _memset - fill in a block of memory with a specific value
 * @w: start address of memory to be filled
 * @x: put the desired value
 * @y: The number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *w, char x, unsigned int y)
{
	int p = 0;

	for (; y > 0; p++)
	{
		w[p] = x;
		y--;
	}
	return (w);
}
