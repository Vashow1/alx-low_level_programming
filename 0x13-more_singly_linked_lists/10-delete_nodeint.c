#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: the current head of the linked list
 * @index: the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *previousNode, *nextNode;
	unsigned int idx = 1;

	temp = *head;
	if (temp == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return  (1);
	}
	while (temp && (idx < index))
	{
		temp = temp->next;
		idx++;
	}
	previousNode = temp;
	temp = temp->next;
	nextNode = temp->next;
	free(temp);
	previousNode->next = nextNode;
	return (1);
}
