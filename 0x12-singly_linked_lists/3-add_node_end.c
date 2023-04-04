#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_length - computes the length of a string
 * @str: string
 *
 * Return: length
 */
int get_length(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * add_node_end - Adds a node at the end of the list
 * @head: head of the list
 * @str: string to add
 *
 * Return: pointer new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tmp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = get_length(str);

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = newNode;
	}
	newNode->next = NULL;
	return (newNode);
}
