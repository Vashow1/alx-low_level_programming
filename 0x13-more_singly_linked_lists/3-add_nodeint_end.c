#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to the current last node of the listint_t list
 * @n: value of listint_t->n new instance
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode, *tempNode;

	endNode = malloc(sizeof(listint_t));
	if (endNode == NULL)
	{
		return (NULL);
	}
	endNode->n = n;
	endNode->next = NULL;

	if ((*head) == NULL)
	{
		*head = endNode;
	}
	else
	{
		tempNode = *head;
		while (tempNode->next != NULL)
		{
			tempNode = tempNode->next;
		}
		tempNode->next = endNode;
	}
	return (*head);
}
