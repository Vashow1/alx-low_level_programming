#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: the head of the list
 * @str: string to be duplicated into the field
 * Return: address to the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	int len = 0;
	char *nodeStr;

	if (node == NULL)
	{
		return (NULL);
	}
	nodestr = strdup(str);
	if (nodestr == NULL)
	{
		free(node);
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	node->len = len;
	node->str = nodestr;
	node->next = *head;
	*head = node;
	return (node);
}
