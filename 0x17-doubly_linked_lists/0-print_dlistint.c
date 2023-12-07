#include "lists.h"

/**
 * print_dlistint - The function prints all the elemts of a doubly linked list
 * @h: The poiner to head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
