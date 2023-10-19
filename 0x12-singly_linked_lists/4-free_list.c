#include "lists.h"

/**
 * free_list - frees a list.
 * @head: the head pointing to the first node.
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
