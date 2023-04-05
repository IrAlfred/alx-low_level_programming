#include "lists.h"

/**
 * add_nodeint_end - Add a new elt at the end of list
 * @head: head of the list
 * @n: data to add
 *
 * Return: new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *newItem = malloc(sizeof(listint_t));

	if (newItem == NULL)
		return (NULL);
	newItem->n = n;
	if (*head == NULL)
	{
		*head = newItem;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = newItem;
	}
	return (newItem);
}
