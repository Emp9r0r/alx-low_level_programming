#include "lists.h"

/**
 * sum_listint - The function that returns sum of the data (n) of a,
 * listint_t linked list.
 * @head: Pointer to the head of linked list.
 *
 * Return: The sum of all the data (n) of a linked list or 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
