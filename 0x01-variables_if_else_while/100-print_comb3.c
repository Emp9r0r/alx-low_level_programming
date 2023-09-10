#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d, p;

	for (d = '0'; d <= '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			putchar(d);
			putchar(p);

			if (d != '8' || p != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

