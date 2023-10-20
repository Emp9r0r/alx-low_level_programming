#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - A function that inserts a new node at the beginning of a list.
 * @head: A pointer to the singly linked list.
 * @str: A pointer to the singly linked list.
 *
 * The 'str' content should be duplicated.
 * You may utilize the 'strdup' function.
 *
 * Return: The address of the newly created element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[length])
		length++;
	new_node->len = length;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
