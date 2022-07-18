void free_listint2(listint_t **head)
{
	listint_t *tempNode;

	while(*head)
	{
		tempNode = *head;
		*head = *head->next;
		free(tempNode);
	}
}
