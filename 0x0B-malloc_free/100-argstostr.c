#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int input in main
 * @av: double pointer array arguments passed to main
 *
 * Return: Pointer
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, at, b, c, d;

	if (ac == 0 || av == NULL)
		return (0);
	a = 0, d = 0;
	for (b = 0; b < ac; b++)
	{
		at = 0;
		while (av[b][at])
			at++;
		a += at + 1;
	}
	s = malloc((a + 1) * sizeof(char));

	if (s == 0)
		return (0);

	for (c = 0; c < ac; c++)
	{
		at = 0;
		while (av[c][at])
		{
			*(s + d) = av[c][at];
			d++;
			at++;
		}
		*(s + d) = '\n';
		d++;
	}
	*(s + d) = '\0';

	return (s);
}
