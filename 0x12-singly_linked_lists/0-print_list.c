#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all the elements of a list_t linked list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);

}
