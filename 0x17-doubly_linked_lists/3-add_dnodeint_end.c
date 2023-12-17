#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of the list.
 * @head: pointer to the head of the list.
 * @n: the value @each node of the list.
 * Return: pointer to the last node added.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *endNode;

	endNode = malloc(sizeof(dlistint_t));
	if (endNode == NULL)
		return (NULL);

	endNode->n = n;
	endNode->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		endNode->prev = NULL;
		*head = endNode;
		return (endNode);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = endNode;
	endNode->prev = temp;


	return (endNode);
}
