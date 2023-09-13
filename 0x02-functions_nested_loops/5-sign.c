#include "main.h" 
/**
* _isalph - Checks for alphabetic character
* @c: The character to be checked
* Return: 1 for alphabetic character or 0 for anything else
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}