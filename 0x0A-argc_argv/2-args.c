#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed into main it receives
 * @argc: number of line arguments
 * @argv: Array name of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);

	return (0);
}
