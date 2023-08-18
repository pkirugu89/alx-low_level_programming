#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at a given index
 * @head: start node
 * @index: position of index to delete
 *
 * Return: Always 1 if successful, otherwise -1 if index out of bounds
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	/* checks if the list is empty */
	if (*head == NULL)
		return (-1);
	/* Traverse the list to find the desired index */
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	/* check if index is out of bounds */
	if (current == NULL && count == index)
	{
		return (-1);
	}
	else if (current != NULL && count == index)
	{
		/* delete the node at the desired index */
		/* update previous node next pointer */
		if (current->prev != NULL)
			current->prev->next = current->next;
		else
			*head = current->next; /* delete the head node */
		/* Update next node's previous pointer */
		if (current->next != NULL)
			current->next->prev = current->prev;
		free(current);
		return (1); /* successfully deleted a node */
	}
	else
	{
		return (-1); /* unsuccessfully deleted a node */
	}
}
