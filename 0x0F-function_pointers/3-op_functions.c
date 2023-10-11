#include "3-calc.h"

/**
 * op_add - Adds two numbers.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: The result of the addition operation.
 */

int op_add(int m, int n)
{
	return (m + n);
}

/**
 * op_sub - Subctracts two numbers.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: The result of the difference operation.
 */
int op_sub(int m, int n)
{
	return (m - n);
}

/**
 * op_mul - Multiplies two numbers.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: The result of the multiplication operation.
 */
int op_mul(int m, int n)
{
	return (m * n);
}

/**
 * op_div - Divides two numbers.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: The result of the division operation.
 */
int op_div(int m, int n)
{
	if (n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (m / n);
}

/**
 * op_mod - To calculates the module of two numbers.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: The remainder of the division.
 */
int op_mod(int m, int n)
{
	if (n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (m % n);
}
