#include "lists.h"

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
