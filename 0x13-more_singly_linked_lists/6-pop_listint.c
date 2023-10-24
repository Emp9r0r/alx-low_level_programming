#include "lists.h"

/**
 * pop_listint - the function that deletes the head node of a listint_t,
 * linked list.
 * @head: Pointer to a pointer to the list's head.
 *
 * prevents memory leaks, and returns its data.
 * Return: 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
