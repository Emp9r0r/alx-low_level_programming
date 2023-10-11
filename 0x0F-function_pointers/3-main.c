#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for Holberton School student code evaluation.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always returns 0 to indicate successful program execution.
 */

int main(int argc, char *argv[])
{
	int m, n;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	m = atoi(argv[1]);
	n = atoi(argv[3]);

	printf("%d\n", operation(m, n));
	return (0);
}
