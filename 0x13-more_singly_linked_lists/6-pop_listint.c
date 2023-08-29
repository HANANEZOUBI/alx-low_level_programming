#include "lists.h"

/**
 * pop_listint - delete the head node
 *
 * @head: head of a list.
 *
 * Return: data of the head
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *h;
	listint_t *node;

	if (*head == NULL)
		return (0);

	node = *head;

	d = node->n;

	h = node->next;

	free(node);

	*head = h;

	return (d);
}
