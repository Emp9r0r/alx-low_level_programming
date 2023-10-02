#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - Calculates the minimum number of coins required for a given amount.
 * @k: The amount for which to calculate the minimum number of coins.
 *
 * Return: The minimum number of coins needed for the given amount.
 */

int coinConverter(int k)
{
	int count = 0;

	while (k != 0)
	{
		if (k % 10 == 9 || k % 10 == 7)
			k -= 2;
		else if (k % 25 == 0)
			k -= 25;
		else if (k % 10 == 0)
			k -= 10;
		else if (k % 5 == 0)
			k -= 5;
		else if (k % 2 == 0)
		{
			if (k % 10 == 6)
				k -= 1;
			else
				k -= 2;
		}
		else
			k -= 1;

		count++;
	}

	return (count);
}

/**
 * main - Calculates the minimum number of coins needed for a given amount.
 * @argc: Number of command line arguments (should be 2: program name and amount)
 * @argv: Array of command line argument strings
 * Return: 0 if exactly 1 argument (excluding program name) is passed, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int k, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	k = atoi(argv[1]);

	if (k < 0)
		printf("0\n");
	else
	{
		coin = coinConverter(k);

		printf("%d\n", coin);
	}

	return (0);
}
