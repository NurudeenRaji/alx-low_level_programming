#include "lists.h"

/**
 * sum_listint - Sum all the data in a list.
 * @head: the head of the list.
 * Return: the total sum.
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum, data;

	node = head;
	sum = 0;
	while (node != NULL)
	{
		data = node->n;
		sum = sum + data;
		node = node->next;
	}
	return (sum);
}
