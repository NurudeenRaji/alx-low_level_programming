#include "lists.h"

/**
 * get_dnodeint_at_index - Return the node at a index.
 * @head: pointer to the head.
 * @index: the index to get node.
 * Return: the node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	if (head == NULL)
		return (NULL);
	i = 0;
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
