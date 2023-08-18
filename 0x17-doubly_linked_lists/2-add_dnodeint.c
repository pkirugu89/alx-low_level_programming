#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Method that adds a new node at beginning of dlistint_t
 * @head: start node
 * @n: node number
 *
 * Return: new_node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	/* check if the new node starts at the front of dlistint_t */
	if (new_node == NULL)
	{
		return (NULL);  /* Allocation failed, return NULL */
	}

	/* Initialize the new node with the provided value */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	/* Update the previous pointer of the current head, if it exists */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	/* update the head pointer to the new node */
	*head = new_node;

	/* Returns the address of the new node */
	return (new_node);
}
