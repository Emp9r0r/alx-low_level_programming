#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print series of strings separated by specified separator.
 * @separator: The separator string (e.g., comma and space).
 * @n: The number of string elements to be printed.
 *
 * Return: No return value (void).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int f;
	char *str;

	va_start(valist, n);

	for (f = 0; f < n; f++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (f < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
