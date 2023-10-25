#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index,
 * index of a listint_t linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @index: Index of the node to be deleted (starting at 0).
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (i != index - 1 && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i == index - 1 && temp->next != NULL)
	{
		temp2 = temp->next;
		temp->next = temp2->next;
		free(temp2);
		return (1);
	}
	return (-1);
}
