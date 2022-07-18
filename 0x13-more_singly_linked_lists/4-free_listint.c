#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: the current head of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *currentStruct;

	while(head)
	{
		currentStruct = head;
		head = head->next;
		free(currentStruct->n);
		free(currentStruct);
	}
}
