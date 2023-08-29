#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * 
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new node or NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *node;

	(void)node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	node = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = new;
	}

	return (*head);
}
