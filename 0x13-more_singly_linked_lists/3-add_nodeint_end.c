#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: the head of the list.
 * @n: the value of the node  to add.
 * Return: the new node added.
 */

listint_t  *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = node;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
	}

	return (node);
}
