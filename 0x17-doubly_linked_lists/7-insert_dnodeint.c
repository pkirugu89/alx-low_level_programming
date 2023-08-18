#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a new node at a given index
 * @h: start node
 * @idx: index to add node
 * @n: node number
 *
 * Return: Always new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int i;

	/* Invalid node */
	if (!h)
		return (NULL);
	/* Memory Allocation failed */
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	/* Insert at the beginning of the list */
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		current = *h;
		for (i = 0; current && i < idx - 1; i++)
			current = current->next;
		/* checks if index is out of bound */
		if (!current)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next)
			current->next->prev = new_node;
		current->next = new_node;
	}
	return (new_node);
}
