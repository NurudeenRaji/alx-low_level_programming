#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: head of the list.
 * Return: the size of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
