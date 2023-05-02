#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 *
 * @head: a pointer to the head of the linked list
 * @n: the value to add to the new node
 *
 * Return: the address of the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
