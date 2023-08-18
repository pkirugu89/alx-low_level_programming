#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
/* Prototype for print_dlistint function */
size_t print_dlistint(const dlistint_t *h);
/* Prototype for returning number of elements in dlistint list */
size_t dlistint_len(const dlistint_t *h);
/* Prototype that adds a new node at the beginning of dlistint_t list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/* Prototype that adds a new node at the end of dlistint_t list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/* Prototype that adds a new node at the end of the dlistint_t list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/* Prototype that frees a dlistint_t list */
void free_dlistint(dlistint_t *head);
/* Prototype that returns the nth node of dlistint_t list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/* Prototype that returns the sum of all data(n) of dlistint_t */
int sum_dlistint(dlistint_t *head);
/* Prototype that inserts a new node at a given position */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/* Prototype that deletes the node at an index of dlistint_t list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
