#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: the head of the list
 * @str: the string to be duplicated
 * Return: aaddress of the end node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	int len = 0;
	list_t *tmp;
	char *nodestring = strdup(str);

	if (node == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		free(node);
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	node->len = len;
	node->str = nodestring;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node;

	}
	return (node);
}
