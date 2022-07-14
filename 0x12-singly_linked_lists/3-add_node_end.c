#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: the head of the list
 * @str: the string to be duplicated
 * Return: aaddress of the  
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	int len = 0;
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
	if (*head == NULL)
	{
		*head = node;
	}

	while (head)
	{
		len++;
		if (head->next == NULL)
		{
			break;
		}
		head->next;
	}
	head->next = node;
	node->len = len;
	node->str = ;
	node->next = NULL;
}
