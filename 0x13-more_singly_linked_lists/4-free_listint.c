#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Head of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
