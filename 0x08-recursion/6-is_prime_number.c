#include "main.h"

/**
 * prime2 - Makes possible to evaluate from 1 to z
 * @x: same number as z
 * @y: number that iterates from 1 to z
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime2(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prime2(x, y + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @z: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int z)
{
	if (z <= 1)
		return (0);
	return (prime2(z, 2));
}
