#include "main.h"
/**
 * _strlen - returns the length of a string
 * @e: string
 * Return: length
 */

int _strlen(char *e)
{
	int longk = 0;


	while (*e != '\0')
	{
		longk++;
		e++;
	}
	return (longk);
}
