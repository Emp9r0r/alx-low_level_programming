#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Program that takes integer arguments and returns their sum
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: 0 if successful, 1 if a non-integer argument is encountered
 */
int main(int argc, char *argv[])
{
	int r, t, length, add;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		add = 0;
		for (r = 1; r < argc; r++)
		{
			ptr = argv[r];
			length = strlen(ptr);

			for (t = 0; t < length; t++)
			{
				if (isdigit(*(ptr + t)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			add += atoi(argv[r]);
		}

	printf("%d\n", add);
	}
	return (0);
}
