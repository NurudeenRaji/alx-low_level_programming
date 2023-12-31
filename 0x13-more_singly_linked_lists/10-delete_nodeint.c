#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a index.
 * @head: the head of the list.
 * @index: the index  to delete from.
 * Return: 1(Success), -1(Fail).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	temp = *head;
	prev = NULL;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
