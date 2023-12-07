#include "lists.h"

/**
 * get_dnodeint_at_index -to return node at given index
 * @head: pointer to current head node
 * @index: index of node to return
 *
 * Return: address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head)
	{
		if (c == index)
			return (head);
		head = head->next;
		c++;
	}
	return (NULL);
}
