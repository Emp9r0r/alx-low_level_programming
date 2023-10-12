#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print series of num separated by a specified separator.
 * @separator: The separator string (e.g., comma and space).
 * @n: The number of elements to be printed.
 *
 * Return: No return value (void).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int t;

	va_start(valist, n);

	for (t = 0; t < n; t++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && t < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
