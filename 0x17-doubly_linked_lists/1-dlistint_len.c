#include "lists.h"

/**
 * dlistint_len - Number of elements in the list.
 * @h: pointer to head of the list.
 * Return: number of element counted.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	if (h == NULL)
		return (i);
	return (i);
}

