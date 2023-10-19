#include "lists.h"

/**
 * add_node - adds a new node at the begining of a list.
 * @head: address pointing to the first node.
 * @str: the struct name.
 * Return: pointer to the struct.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	node->next = *head;
	*head = node;

	return (node);
}
