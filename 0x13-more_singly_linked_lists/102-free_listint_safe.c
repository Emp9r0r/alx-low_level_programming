#include "lists.h"

/**
 * free_listint_safe - This function that frees a listint_t list.
 * @h: Pointer to the pointer to the head of the linked list.
 *
 * This function frees a linked list using a single pass through the list.
 * It sets the head to NULL.
 *
 * Return: The size of the list that was freed, or 0.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listnode_t *nodes = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (!is_in_nodes(nodes, *h))
	{
		if (!add_nodeptr(&nodes, *h))
		{
			free_listnode(nodes);
			exit(98);
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		count++;
	}
	if (*h != NULL)
		*h = NULL;
	free_listnode(nodes);
	return (count);
}
