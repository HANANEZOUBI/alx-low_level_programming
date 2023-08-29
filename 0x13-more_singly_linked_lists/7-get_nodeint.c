#include "lists.h"

/**
 * get_nodeint_at_index - return the node
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return:pointer of node or if node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head != NULL; c++)
	{
		head = head->next;
	}

	return (head);
}
