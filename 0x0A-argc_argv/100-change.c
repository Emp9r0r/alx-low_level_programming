#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Calculates and prints the minimum number of coins.
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int num, l, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (l = 0; l < 5 && num >= 0; l++)
	{
		while (num >= coins[l])
		{
			result++;
			num -= coins[l];
		}
	}
	printf("%d\n", result);
	return (0);
}
