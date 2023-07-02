#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: beginning of list
 * @str: string
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n;
	list_t *node, *current;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	node->len = n;
	node->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = node;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
	return (*head);
}
