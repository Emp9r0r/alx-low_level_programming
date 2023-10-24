#include "lists.h"

/**
 * free_listint2 - Frees a singly linked list, sets head to NULL.
 * @head: Pointer to a pointer to the list's head.
 *
 * Description: Deallocates memory to avoid memory leaks and sets head to NULL.
 * No return value.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
