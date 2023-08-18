#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a new node at a given index
 * @h: start node
 * @idx: index to add node
 * @n: node number
 * Return: Always new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* Allocate memory for the new node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/* If list is empty and index is 0, the new node becomes the head */
	if (*h == NULL && idx == 0)
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	current = *h;
	/* Transverse the list to find the desired index */
	while (current != NULL && count < idx)
		current = current->next;
		count++;
	/* Insert the new node at the end of the list */
	if (current == NULL && count == idx)
		new_node->prev = *h;
		new_node->next = NULL;
		if (*h != NULL)
			(*h)->next = new_node;
		return (new_node);
	else if (current != NULL && count == idx)
		/* Insert the new node before the current node */
		new_node->prev = current->prev;
		new_node->next = current;
		if (current->prev != NULL)
			current->prev->next = new_node;
		current->prev = new_node;
		return (new_node);
	/* Index is out of bounds or new node can't be inserted */
	free(new_node);
	return (NULL);
}
