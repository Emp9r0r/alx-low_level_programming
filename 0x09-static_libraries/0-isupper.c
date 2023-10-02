#include "main.h"

/**
 * _isupper - the uppercase letters
 * @d: char for check
 *
 * Return: 0 or 1
 */

int _isupper(int d)
{
	if (d >= 'A' && d <= 'Z')
		return (1);
	else
		return (0);
}
