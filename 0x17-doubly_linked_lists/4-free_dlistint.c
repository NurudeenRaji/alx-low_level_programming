#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: pointer to the head of the list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	if (head == NULL)
		return;
	while (temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
