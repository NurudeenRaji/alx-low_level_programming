#include "lists.h"

/**
 * add_node_end - Adds node at the end.
 * @head: the head pointing to the first node.
 * @str: the str to duplicate and add.
 * Return: address of the new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *current_node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = node;

	node->next = NULL;

	return (node);
}
