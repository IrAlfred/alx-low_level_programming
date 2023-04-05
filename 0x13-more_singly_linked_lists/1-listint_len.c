#include "lists.h"

/**
 * listint_len - Gets the length of the list
 * @h: head of the list
 *
 * Return: number of elts in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	listint_t *tmp = h;

	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
