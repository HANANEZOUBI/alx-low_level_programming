#include "lists.h"

/**
 * listint_len - print a linked list.
 * @h: head of a list.
 *
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
