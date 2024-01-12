#include "lists.h"

/**
 * add_dnodeint - add a node to the beginning of the list.
 * @head: pointer to the head of the list.
 * @n: the value at each node.
 * Return: pointer to the node added.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newNode;
	(*head) = newNode;

	return (newNode);
}
