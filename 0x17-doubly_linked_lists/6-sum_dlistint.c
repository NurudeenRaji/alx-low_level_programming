#include "lists.h"

/**
 * sum_dlistint - sum all the data in a linked list.
 * @head: pointer to the head.
 * Return: sum of the data.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
