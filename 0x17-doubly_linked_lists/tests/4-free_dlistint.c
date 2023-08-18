#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - method that frees the dlistint_t list
 * @head:  start node
 *
 * Return: Always 0 (Success)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	/* Transverse the list and free each node */
	while (current != NULL)
	{
		/* temp dlistint_t stores the current nod */
		dlistint_t *temp = current;
		/* moves to the next node */
		current = current->next;
		/* Free the stored node */
		free(temp);
	}
}
