#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: first element of node
 * Return: No. of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->n ==  0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		a++;
		h = h->next;
	}
	return (a);
}
