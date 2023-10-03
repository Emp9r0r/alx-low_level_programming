#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for array size
 * @q1: input one to concat
 * @q2: input two to concat
 * Return: concat of q1 and q2
 */

char *str_concat(char *q1, char *q2)
{
	char *conct;
	int f, af;

	if (q1 == NULL)
		q1 = "";
	if (q2 == NULL)
		q2 = "";
	f = af = 0;
	while (q1[f] != '\0')
		f++;
	while (q2[af] != '\0')
		af++;
	conct = malloc(sizeof(char) * (f + af + 1));

	if (conct == NULL)
		return (NULL);
	f = af = 0;
	while (q1[f] != '\0')
	{
		conct[f] = q1[f];
		f++;
	}
	while (q2[af] != '\0')
	{
		conct[f] = q2[af];
		f++, af++;
	}
	conct[f] = '\0';
	return (conct);
}
