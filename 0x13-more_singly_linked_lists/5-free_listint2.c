#include "lists.h"

/**
 * free_listint2 - program thatfrees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((node = curr) != NULL)
		{
			curr = curr->next;
			free(node);
		}
		*head = NULL;
	}
}
