#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Calculate the sum of a variable number of inputs.
 * @n: The number of variadic inputs.
 *
 * Return: The sum of the variadic inputs.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int a, sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(valist, const unsigned int);
	}

	va_end(valist);

	return (sum);
}
