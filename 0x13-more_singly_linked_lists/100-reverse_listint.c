#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 *
 * This function utilizes a single loop and a maximum of two variables.
 * It does not use malloc, free, or arrays to ensure no memory leaks.
 *
 * Return: Pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if (current->next == NULL)
	{
		*head = current;
		return (*head);
	}
	else if (*head && (*head)->next)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		reverse_listint(head);
		temp->next->next = current;
		temp->next = NULL;
	}
	return (*head);
}
