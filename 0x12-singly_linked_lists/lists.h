#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Task 0: print all list elements prototype */
size_t print_list(const list_t *h);
/* Task 1: returns number of elements linked in List_t prototype */
size_t list_len(const list_t *h);
/* Task 2: add node at the beginning of list_t prototype */
list_t *add_node(list_t **head, const char *str);
/* Task 3: add new node at the end of list_t prototype */
list_t *add_node_end(list_t **head, const char *str);
/* Task 4: frees list_t list prototype */
void free_list(list_t *head);
#endif
