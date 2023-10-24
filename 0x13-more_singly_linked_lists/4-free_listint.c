#include "lists.h"

/**
 * free_listint - Frees a singly linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Description: function deallocates the memory used by singly linked list.
 * It utilizes recursion to ensure there are no memory leaks.
 *
 * Return: No return value.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
