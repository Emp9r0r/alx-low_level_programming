#include "lists.h"

/**
 * list_len - Calculates the number of nodes in a linked list.
 * @h: The head of the list.
 *
 * Return: The count of elements in the list.
 */

size_t list_len(const list_t *h)
{
	const list_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
