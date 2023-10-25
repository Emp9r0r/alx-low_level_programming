#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at,
 * a given position.
 * @head: Pointer to the head of the linked list.
 * @idx: Index at which the new node should be added.
 * @n: Value of the new node.
 *
 * If it's not possible to add the new node at the specified index,
 * it returns NULL.
 *
 * Return: The address of the new node, or NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *traverse;
	unsigned int m = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	traverse = *head;
	while (m != idx - 1 && traverse != NULL)
	{
		traverse = traverse->next;
		m++;
	}
	if (m == idx - 1 && traverse != NULL)
	{
		new_node->next = traverse->next;
		traverse->next = new_node;
		return (new_node);
	}
	return (NULL);
}
