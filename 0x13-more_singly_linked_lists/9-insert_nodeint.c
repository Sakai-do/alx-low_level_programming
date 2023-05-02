#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current_node = *head, *prev_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (i < idx && current_node)
	{
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}

	if (i == idx)
	{
		new_node->next = current_node;
		if (prev_node)
			prev_node->next = new_node;
		else
			*head = new_node;

		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
