#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	node = *head;
	while (node != NULL)
	{
		temp = node->next;
		free(node->n);
		free(node);
		node = temp;
	}
}
