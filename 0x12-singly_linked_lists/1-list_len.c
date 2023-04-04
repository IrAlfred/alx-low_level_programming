#include "lists.h"

/**
 * list_len - Computes the length of elts in list
 * @h: linked list
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
