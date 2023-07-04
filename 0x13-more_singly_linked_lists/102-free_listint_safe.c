#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list (can free lists with a loop)
 * @h: pointer to head of singly linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *t1 = *h, *t2;
	unsigned int c = 0;

	if (t1 == 0 || h == 0)
		return (0);

	t1 = *h;
	while (t1 != 0)
	{
		t2 = t1;
		t1 = t1->next;
		c++;

		free(t2);

		if (t2 <= t1)
			break;
	}

	*h = 0;
	return (c);
}
