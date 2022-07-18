#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 *
 * @h: a pointer to the listint_t instance
 * Return: the number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t no_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_node++;
	}
	return (no_node);
}
