#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @g: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *g)
{
	int sign = 1, i = 0;

	unsigned int res = 0;

	while (!(g[i] <= '9' && g[i] >= '0') && g[i] != '\0')
	{
		if (g[i] == '-')
			sign *= -1;
		i++;
	}
	while (g[i] <= '9' && (g[i] >= '0' && g[i] != '\0'))
	{
		res = (res * 10) + (g[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
