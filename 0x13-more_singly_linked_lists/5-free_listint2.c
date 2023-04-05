#include "lists.h"

/**
 * free_listint2 - Frees the list
 * @head: head of the list
 *
 * Return : nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
