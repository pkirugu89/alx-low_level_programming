#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Calculates the sums of all data values in dlistint_t
 * @head: start node
 *
 * Return: Always sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	/* Transverse through the list and sums all data values */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
