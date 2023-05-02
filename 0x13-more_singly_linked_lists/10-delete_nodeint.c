#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head || !(*head))
		return (-1);

	listint_t **prev = head, *temp = *head;

	for (unsigned int i = 0; temp; i++, prev = &temp, temp = temp->next)
	{
		if (i == index)
		{
			*prev = temp->next;
			free(temp);
			return (1);
		}
	}

	return (-1);
}
