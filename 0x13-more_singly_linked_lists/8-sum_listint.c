#include "lists.h"

/**
 * sum_listint - sums all the data(n) of a listint_t linkedlist.
 *
 * @head: current head of the current list
 * Return
 */

int sum_listint(listint_t *head)
{
	int sumn = 0;

	if (head == NULL)
	{
		return (0);
	}
	while(head != NULL)
	{
		sumn += head->n;
		head = head->next;
	}

	return (sumn);
}
