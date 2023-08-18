#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Counts the number of elements method
 * @h: doubly linked-list dlinkint_t
 *
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* Initialize the count of elements */
	size_t count = 0;
	/* Traverse the linked list and count the elements */
	while (h != NULL)
	{
		count++;
		/* move to the next node */
		h = h->next;
	}
	return (count);
}
