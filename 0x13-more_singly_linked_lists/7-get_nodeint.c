#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at a particular index.
 * @head: the head of the linked list.
 * @index: the index to get the node.
 * Return: the node at int specified index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	temp = head;
	for (count = 0; temp != NULL; count++)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (NULL);
}
