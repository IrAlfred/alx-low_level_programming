#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at specified index
 * @head: head of the linked list
 * @index: index to be deleted
 *
 * Return: 1 (success) -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *node_d;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		node_d = *head;
		*head = (*head)->next;
		free(node_d);
		return (1);
	}

	node = *head;
	while (i < index - 1)
	{
		if (node == NULL)
		{
			return (-1);
		}
		node = node->next;
		i++;
	}
	node_d = node->next;
	node->next = node_d->next;
	free(node_d);
	return (1);
}
