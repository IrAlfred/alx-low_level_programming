#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * getLength - gets the length of string
 * @str: string
 *
 * Return: count
 */
int getLength(const char *str)
{
	int count = 0;

	while (str[count])
		count++;
	return (count);
}
/**
 * add_node - adds a node at the top of the list
 * @head: head of the list
 * @str: string of the node to add
 *
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = getLength(str);
	node->next = *head;
	*head = node;
	return (node);
}
