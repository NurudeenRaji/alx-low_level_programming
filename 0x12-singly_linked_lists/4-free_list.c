#include "lists.h"

/**
 * free_list - frees a list.
 * @head: the head pointing to the first node.
 */

void free_list(list_t *head)
{
	list_t *node, *temp;

	node = head;
	while (node != NULL)
	{
		temp = node->next;
		free(node->str);
		free(node);
		node = temp;
	}
}
