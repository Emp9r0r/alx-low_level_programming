#include <stdio.h>

/**
 * main - Displays the name of the source file it was compiled from.
 *
 * Return:
 * This function always returns success or an exit status code indicating
 * that everything worked as expected.
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
