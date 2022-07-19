#include "lists.h"

/**
 * get_nodeint_at_index - Get the int n variable in struct at index object.
 *
 * @head: current head of the list.
 * @index: the index of the object being queried
 * Return: the n variable in struct at index object
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int listIndex = 0;

	temp = head;
	if (index == 0)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		return (temp);
	}
	while(temp && listIndex < index)
	{
		temp = temp->next;
		listIndex++;
	}
	listIndex++;
	if (listIndex < index)
	{
		return (NULL);
	}
	return (temp);
}
