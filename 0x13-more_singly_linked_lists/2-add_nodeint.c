#include "lists.h"

/**
 * add_nodeint - The function adds new element (node) at the beginning of,
 * a listint_t list.
 * @head: Pointer to the list's head pointer.
 * @n: Data to add.
 *
 * Return: Address of the new element if successful, NULL on failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element = malloc(sizeof(listint_t));

		if (new_element == NULL)
			return (NULL);
		new_element->n = n;
		new_element->next = *head;
		*head = new_element;
		return (new_element);
}
