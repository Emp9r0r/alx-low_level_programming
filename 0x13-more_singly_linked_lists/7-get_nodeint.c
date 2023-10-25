#include "lists.h"

/**
 * get_nodeint_at_index - The function  returns the nth node of a,
 * listint_t linked list.
 * @head: Pointer to the head of linked list.
 * @index: Index of the node, starting at 0.
 *
 * prevent memory leaks.
 *
 * Return: Return the nth node or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (head == NULL)
		return (NULL);
	while (a < index && head != NULL)
	{
		head = head->next;
		a++;
	}
	return (head);
}
