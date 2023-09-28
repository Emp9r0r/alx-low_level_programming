#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @a1: string to compare to
 * @a2: string with wild character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int wildcmp(char *a1, char *a2)
{
	if (*a1 == '\0' && *a2 == '\0')
		return (1);

	if (*a1 == *a2)
		return (wildcmp(a1 + 1, a2 + 1));

	if (*a2 == '*')
	{
		if (*a2 == '*' && *(a2 + 1) != '\0' && *a1 == '\0')
			return (0);
		if (wildcmp(a1, a2 + 1) || wildcmp(a1 + 1, a2))
			return (1);
	}

	return (0);
}
