#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: head of the current list.
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: data(n) of the new node.
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int index = 1;

	temp = *head;
	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		newNode->next = temp;
		return (newNode);
	}
	while (temp && index < idx)
	{
		temp = temp->next;
		index++;
	}
	index++;
	if (index < idx)
	{
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
