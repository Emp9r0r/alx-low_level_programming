#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastd = n % 10;

	if (lastd > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	if (lastd == 0)
		printf("last digit of %d is %d and is 0\n", n, lastd);
	if (lastd < 6 && lastd != 0)
		printf("last digit of %d is %d is less than 6 and not 0\n", n, lastd);
	return (0);

}
