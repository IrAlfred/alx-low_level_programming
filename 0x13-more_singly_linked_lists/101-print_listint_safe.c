#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of the list
 *
 * Return: number of  nodes int the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const  listint_t *node;
	size_t i = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		exit(98);
	if (head == NULL)
		exit(98);
	node = head;
	while (node->next != NULL)
	{
		printf("[%p] %d\n", (void*)node, node->n);
		node = node->next;
		i++;
	}
	return (i);
}
