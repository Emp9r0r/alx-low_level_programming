#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies the first two integer arguments and prints the result.
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 * Return: 0 if successful, 1 if not enough arguments provided
 */
int main(int argc, char *argv[])
{
	int m, n;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = 1;

		for (m = 1; m < 3; m++)
			n *= atoi(argv[m]);

		printf("%d\n", n);
	}

	return (0);
}
