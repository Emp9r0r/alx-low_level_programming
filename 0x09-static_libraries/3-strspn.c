#include "main.h"
/**
 * _strspn - Entry point
 * @b: input
 * @recived: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *b, char *recived)
{
	unsigned int j = 0;
	int i;

	while (*b)
	{
		for (i = 0; recived[i]; i++)
		{
			if (*b == recived[i])
			{
				j++;
				break;
			}
			else if (recived[i + 1] == '\0')
				return (j);
		}
		b++;
	}
	return (j);
}
