#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - function to get length of a string
 * @s: string
 *
 * Return: Length of a array of characters
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(const char *str)
{
	int l = 0, j;
	char *st;

	if (str == NULL)
		return (0);

	while (*(str + l))
		l++;

	st = malloc(sizeof(char) * l + 1);

	if (st == 0)
		return (0);

	for (j = 0; j <= l; j++)
		*(st + j) = *(str + j);
	return (st);
}
/**
 * add_node - adds a new node at the beginning of a singly linked list
 * @head: pointer to head of singly linked list
 * @str: string to add as new node in list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *tmps;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == 0)
		return (0);

	if (str == 0)
	{
		new_node->str = 0;
		new_node->len = 0;
	}
	else
	{
		tmps = _strdup(str);
		if (tmps == 0)
		{
			free(new_node);
			return (0);
		}
		new_node->str = tmps;
		new_node->len = _strlen(tmps);
	}

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
