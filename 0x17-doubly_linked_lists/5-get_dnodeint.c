#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of dlistint_t method
 * @head: start node
 * @index: nth node
 *
 * Return: current node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	/* Transverse the list to the desired index */
	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	/* Return the node at the desired index (or NULL if not found) */
	return (current);
}
