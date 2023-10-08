#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - ...
  * @a1: ...
  * @a2: ...
  * @m: ...
  *
  * Return: ...
  */
char *string_nconcat(char *a1, char *a2, unsigned int m)
{
	unsigned int w = 0, x = 0, y = 0, z = 0;
	char *p;

	if (a1 == NULL)
		a1 = "";
	if (a2 == NULL)
		a2 = "";

	while (a1[w])
		w++;

	while (a2[y])
		y++;

	if (m >= y)
		z = w + y;
	else
		z = w + m;

	p = malloc(sizeof(char) * z + 1);
	if (p == NULL)
		return (NULL);

	y = 0;
	while (x < z)
	{
		if (x <= w)
			p[x] = a1[x];

		if (x >= w)
		{
			p[x] = a2[y];
			y++;
		}
		x++;
	}
	p[x] = '\0';
	return (p);
}
