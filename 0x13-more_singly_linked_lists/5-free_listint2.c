#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
