#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - method that adds a node at the end of dlistint_t
 * @head: start node
 * @n: node number
 *
 * Return: new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* Allocate memory for the new node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	/* if the memory allocation fails, return NULL */
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	/* new node will be the last, so next is NULL */
	new_node->next = NULL;
	/* check if the list is empty, the new node becomes the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* Transverse to the last node in the list */
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		/* update pointers to add the new node at the end */
		new_node->prev = current;
		current->next = new_node;
	}
	return (new_node);
}
