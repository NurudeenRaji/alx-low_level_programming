#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * insert_dnodeint_at_index - inserts a node at a index.
 * @h: pointer to the head.
 * @idx: index to insert to.
 * @n: value to insert.
 * Return: address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	if (newNode == NULL)
		return (NULL);

	if (idx == 0)
	{
		if (*h != NULL)
		{
			newNode->next = *h;
			(*h)->prev = newNode;
		}
		*h = newNode;
	}
	else
	{
		temp = *h;
		i = 0;
		while (temp != NULL && i < idx)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
		{
			free(newNode);
			return (NULL);
		}
		else if (temp->prev == NULL)
		{
			newNode->next = temp;
			temp->prev = newNode;
			*h = newNode;
		}
		else
		{
			newNode->next = temp;
			newNode->prev = temp->prev;
			temp->prev->next = newNode;
			temp->prev = newNode;
		}
	}
	return (newNode);
}
