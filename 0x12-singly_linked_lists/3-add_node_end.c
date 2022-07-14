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

	while (head)
	{
		len++;
		head->next;
	}
	head->next = node;
	node->len = len;
	node->str = strdup(str);
	node->next = NULL;
}
