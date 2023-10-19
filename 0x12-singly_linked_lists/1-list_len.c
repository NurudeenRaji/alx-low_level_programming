#include "lists.h"

/**
 * list_len - NUmber of elements in a linked list.
 * @h: the name of the struct.
 * Return: positive number of element
 */

size_t list_len(const list_t *h)
{
	size_t element;

	element = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			return (0);

		h = h->next;
		element++;
	}
	return (element);
}
