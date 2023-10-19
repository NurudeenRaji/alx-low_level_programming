
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: name of the structure.
 * Return: the positive number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%ld] %s\n", strlen(h->str), h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
