#include "lists.h"

/**
 * listint_len - Counts elements in a linked list.
 * @h: Pointer to the list's head.
 * Return: Number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
