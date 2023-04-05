#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @head: head of the linked list
 * @index: nth element index
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node, *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (i != index)
		{
			tmp = tmp->next;
		}
		else
		{
			if (tmp != NULL)
				node = tmp;
			else
				return (NULL);
		}
		i++;
	}
	return (node);
}
