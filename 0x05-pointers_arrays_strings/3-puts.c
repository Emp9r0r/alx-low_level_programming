#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putschar(str[i]);
	}
	_putchar('\n');
}