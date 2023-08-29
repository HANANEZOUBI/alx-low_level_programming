#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - print all the elements of a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++
	}
	return (c);
}
