#include "lists.h"

/**
 * free_list - Deallocates memory for a list_t linked list.
 * @head: A pointer to the list_t linked list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
