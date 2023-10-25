#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function detects and returns the address of the node
 * or NULL if there is no loop.
 *
 * Return: The address of the node where the loop starts, or NULL if,
 * there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr = head, *fast_ptr = head;

	if (head == NULL || head->next == NULL)
		return (NULL);
	slow_ptr = slow_ptr->next;
	fast_ptr = fast_ptr->next->next;
	while (fast_ptr && fast_ptr->next)
	{
		if (slow_ptr == fast_ptr)
			break;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}
	if (slow_ptr != fast_ptr)
		return (NULL);
	slow_ptr = head;
	while (slow_ptr != fast_ptr)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	return (slow_ptr);
}
