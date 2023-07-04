#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head pointer of singly linked list
 *
 * Return: sum of all the data (n) of a listint_t linked list, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int ad = 0;

	if (head == 0)
		return (0);

	while (head != 0)
	{
		ad += head->n;
		head = head->next;
	}

	return (ad);
}
