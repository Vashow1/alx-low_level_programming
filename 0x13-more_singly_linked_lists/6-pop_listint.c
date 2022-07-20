#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: the head node of the list
 * Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodeData;

	temp = *head;
	if (temp == NULL)
	{
		return (0);
	}
	nodeData = (*head)->n;
	*head = temp->next;
	free(temp);
	return (nodeData);
}
