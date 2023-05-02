listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	unsigned int i = 0;

	while (i < idx - 1 && current_node)
	{
		current_node = current_node->next;
		i++;
	}

	if (i == idx - 1 && current_node)
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
