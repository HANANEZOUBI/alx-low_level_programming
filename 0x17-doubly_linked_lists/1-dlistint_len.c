#include "lists.h"

/**
 * dlistint_len - to return the length of dlist
 * @h: address of head node
 *
 * Return: size of list c
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
