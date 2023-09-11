#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: size of the array.
 *
 * Return: A pointer to the created hash table
 * Otherwise, NULL if the hash table is empty
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i;

	/* Allocate memory for the hash_table_t struct */
	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
	{
		return (NULL);
	}

	/* set the sie of the hash table */
	h_table->size = size;
	/* Allocate memory for the array of hash_node_t* pointers */
	h_table->array = malloc(size * sizeof(hash_node_t *));
	if (!(h_table->array))
	{
		free(h_table);
		return (NULL);
	}
	/* Initialize the array elements to NULL */
	for (i = 0; i < size; i++)
	{
		h_table->array[i] = NULL;
	}

	return (h_table);
}
