#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node.
 * @head: the head of the list.
 * @idx: the index point to add node.
 * @n: the data of the new node.
 * Return: the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *node;
	unsigned int count;

	temp = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (count = 0; count < idx - 1; count++)
	{
		if (temp == NULL)
		{
			free(node);
			return (NULL);
		}
		temp = temp->next;
	}
	node->next = temp->next;
	temp->next = node;

	return (node);
}
