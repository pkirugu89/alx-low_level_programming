#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of singly linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x, *y;

	if (*head == 0)
		return (0);

	if ((*head)->next == 0)
		return (*head);

	x = *head;
	y = x->next;
	x->next = 0;
	while (1)
	{
		if (y->next == 0)
		{
			y->next = *head;
			*head = y;
			break;
		}
		x = y;
		y = x->next;
		x->next = *head;
		*head = x;
	}

	return (*head);
}
