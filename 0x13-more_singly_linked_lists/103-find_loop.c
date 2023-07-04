#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - finds address of starting node in looped linked list
 * @head: pointer to the head in linked list to test
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x, *y;

	if (!head)
		return (NULL);

	x = y = head;

	while (y && x && x->next)
	{
		y = y->next;
		x = (x->next)->next;

		if (x == y)
		{
			y = head;

			while (y && x)
			{
				if (y == x)
					return (y);

				y = y->next;
				x = x->next;
			}
		}
	}

	return (NULL);
}
