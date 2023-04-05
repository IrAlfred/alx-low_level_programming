#include "lists.h"

/**
 * pop_listint - deletes the head and return heads node data
 * @head: head of the linked list
 *
 * Return: data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
