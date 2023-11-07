#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/* C Library Imports */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *  
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Create a hash table prototype */
hash_table_t *hash_table_create(unsigned long int size);
/* Implement djb2 algorithm prototype */
unsigned long int hash_djb2(const unsigned char *str);
/* Prototype that outputs the index of a key. */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
/* Add element to the hash table prototype */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/* Retrieve a value associated with a key prototype */
char *hash_table_get(const hash_table_t *ht, const char *key);
/* prints a hash table prototype */
void hash_table_print(const hash_table_t *ht);

#endif
