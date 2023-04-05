#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node at a given pos
 * @head: head of linked list
 * @idx: index where node should be added
 * @n: data to of the node
 *
 * Return: new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	tmp = *head;
	while (i < idx - 1)
	{
		if (tmp == NULL)
		{
			free(node);
			return (NULL);
		}
		tmp = tmp->next;
		i++;
	}
	node->next = tmp->next;
	tmp->next = node;

	return (node);
}
