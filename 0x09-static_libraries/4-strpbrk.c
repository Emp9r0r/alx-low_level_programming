#include "main.h"
/**
 * _strpbrk - Entry point
 * @t: input
 * @recived: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *t, char *recived)
{
	int f;


	while (*t)
	{
		for (f = 0; recived[f]; f++)
		{
		if (*t == recived[f])
		return (t);
		}
	t++;
	}


return ('\0');
}
