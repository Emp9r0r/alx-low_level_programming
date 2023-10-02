#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *t = needle;

		while (*s == *t && *t != '\0')
		{
			s++;
			t++;
		}


		if (*s == '\0')
			return (haystack);
	}


	return (0);
}
