#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: head of the list
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
