#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - function that  prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function prints a linked list using a loop, processing the list once.
 * If the function fails, it exits the program with a status of 98.
 *
 * Return: The number of nodes in the list.
 */


size_t print_listint_safe(const listint_t *head)
{
	listnode_t *nodes = NULL;
	size_t count = 0;

	while (!is_in_nodes(nodes, head))
	{
		if (!add_nodeptr(&nodes, head))
		{
			free_listnode(nodes);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	if (head != NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);
	free_listnode(nodes);
	return (count);
}

/**
 * add_nodeptr - adds a new node at the beginning of a listint_t list
 * @head: Pointer to the pointer to the first node
 * @ptr: Value of the new node
 *
 * Return: The address of the new element, or NULL on failure.
 */
listnode_t *add_nodeptr(listnode_t **head, const listint_t *ptr)
{
	listnode_t *new_element;

	new_element = malloc(sizeof(listnode_t));
	if (new_element == NULL)
		return (NULL);
	new_element->ptr = (listint_t *)ptr;
	new_element->next = *head;
	*head = new_element;
	return (new_element);
}

/**
 * free_listnode - frees a free_listnode list
 * @head: Pointer to first node of the list
 */
void free_listnode(listnode_t *head)
{
	if (head == NULL)
		return;
	free_listnode(head->next);
	free(head);
}

/**
 * is_in_nodes - This checks whether a given address is in a given list
 * @head: Address of the first node in the list
 * @ptr: Address to check.
 *
 * Return: 1 if the address is in the list of nodes, otherwise 0.
 */
int is_in_nodes(listnode_t *head, const listint_t *ptr)
{
	if (ptr == NULL)
		return (1);
	while (head != NULL)
	{
		if (ptr == head->ptr)
			return (1);
		head = head->next;
	}
	return (0);
}
