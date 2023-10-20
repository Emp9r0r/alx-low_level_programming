#include "lists.h"

/**
 * add_node_end - function that appends a new node to the end.
 * @head: A pointer to the singly linked list.
 * @str: A pointer to the singly linked list.
 *
 * The content in 'str' should be duplicated.
 * You are permitted to use the 'strdup' function.
 *
 * Return: The address of the newly created element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[length])
		length++;
	new_node->len = length;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
