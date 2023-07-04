#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nm;

	if (!head || !*head)
		return (0);

	nm = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (nm);
}
