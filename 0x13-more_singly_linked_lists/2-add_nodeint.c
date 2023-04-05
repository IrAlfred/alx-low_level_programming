#include "lists.h"

/**
 * add_nodeint - Add a new element at the top of the list
 * @head: head of list
 * @n: value to be stored
 *
 * Return: new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newItem = NULL;

	newItem = malloc(sizeof(listint_t));
	if (newItem == NULL)
		return (NULL);
	newItem->n = n;
	newItem->next = *head;
	*head = newItem;

	return (newItem);
}
