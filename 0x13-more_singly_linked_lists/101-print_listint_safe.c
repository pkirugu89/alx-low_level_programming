#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a singly linked list (can print lists with loop)
 * @head: head pointer of singly linked list
 *
 * Return: Number of elements in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *x, *y;
	unsigned int node = 0;

	x = head;
	if (x == 0)
		return (0);

	while (x != 0)
	{
		y = x;
		x = x->next;

		node++;

		printf("[%p] %d\n", (void *)y, y->n);

		if (y <= x)
		{
			printf("-> [%p] %d\n", (void *)x, x->n);
			break;
		}
	}

	return (node);
}
