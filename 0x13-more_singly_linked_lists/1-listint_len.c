#include "lists.h"

/**
 * listint_len - computes the number of elements in a linked list.
 *
 * @h: a pointer to an instance of a linked list listint_t
 * Return:  number of elements in the list.
 */



size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
