#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: first node
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}
