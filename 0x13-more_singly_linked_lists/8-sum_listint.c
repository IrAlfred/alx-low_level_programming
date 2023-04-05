#include "lists.h"

/**
 * sum_listint - computes the sum of all the data
 * @head: head of the linked list
 *
 * Return: sum of data, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
