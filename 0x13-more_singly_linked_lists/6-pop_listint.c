#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: the head of the linked list.
 * Return: the data of the head node.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
