#include "lists.h"

/**
 * listint_len - Returns the number of elements in a list.
 * @h: head of the linked list.
 * Return: the linked list size.
 */

size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
