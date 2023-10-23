#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements in a listint_t linked list.
 * @h: Pointer to the list's head.
 *
 * Description: This function displays the list's elements.
 *
 * Return: Number of elements in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
