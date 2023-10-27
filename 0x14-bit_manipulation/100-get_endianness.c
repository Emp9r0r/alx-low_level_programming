#include "main.h"

/**
 * get_endianness - The function will checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int n = 1; /* 00 00 00 01 */
	char *c = (char *) &n;

	if (*c)
		return (1);
	return (0);
}
