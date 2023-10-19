#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - This function is used to display all elements of a list_t.
 * @h: A pointer to the list.
 *
 * If 'str' is NULL, it will print [0] (nil).
 * You have the option to use the 'printf' function.
 *
 * Return: The count of nodes.
 * @return size_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
