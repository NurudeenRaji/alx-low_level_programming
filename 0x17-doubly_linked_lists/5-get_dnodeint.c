#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	if (head == NULL)
		return (NULL);
	i = 0;
	while (temp != NULL)
	{
		if (i == index)
			return (temp);	
		temp = temp->next;
		i++;
	}

	return (NULL);
}
