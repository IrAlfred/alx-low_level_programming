#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the elements of the list
 * @h: the header of the linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		numberOfNodes++;
		h = h->next;
	}
	return (numberOfNodes);
}
