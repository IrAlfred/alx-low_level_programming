#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *tmp = h;

	while(tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
