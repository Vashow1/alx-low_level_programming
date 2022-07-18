#include "lists.h"

/**
 * @free_listint2: frees a listint_t list.
 *
 * @head: head of the current list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tempNode;

	while(*head)
	{
		tempNode = *head;
		*head = (*head)->next;
		free(tempNode);
	}
}
