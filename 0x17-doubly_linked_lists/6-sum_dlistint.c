#include "lists.h"

/**
 * sum_dlistint - sum the values of a dlist
 * @head: pointer to current head node
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
