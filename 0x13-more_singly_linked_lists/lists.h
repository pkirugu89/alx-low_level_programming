#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Task 0: prints all list elements prototype */
size_t print_listint(const listint_t *h);
/* Task 1:Returns elements count in a linked list  prototype */
size_t listint_len(const listint_t *h);
/* Task 2: Add new node at beginning of linked list prototype */
listint_t *add_nodeint(listint_t **head, const int n);
/* Task 3: Add new node at end of linked list prototype */
listint_t *add_nodeint_end(listint_t **head, const int n);
/* Task 4: frees a linked list prototype */
void free_listint(listint_t *head);
/* Task 5: Frees a linked list 2 prototype */
void free_listint2(listint_t **head);
/* Task 6: Delete the head node of linked list prototype */
int pop_listint(listint_t **head);
/* Task 7: Returns the nth node of linked list prototype */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* Task 8: Returns the sum of all data(n) of linked list prototype */
int sum_listint(listint_t *head);
/* Task 9: Insert a node at a given position prototype */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* Task 10: Deletes the node of index of linked list prototype */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
