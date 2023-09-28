#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @x: same number as i
 * @y: number that iterates from 1 to i
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt2(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @i: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int i)
{
	return (sqrt2(i, 1));
}
