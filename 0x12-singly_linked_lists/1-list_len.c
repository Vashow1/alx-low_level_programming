#include "lists.h"

/**
 * list_len - computes number of elements in a list
 *
 * @h: the list pointer.
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}

