#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table.
 * @size: size of the array
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
	if (h_table == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the array of hash_node_t* pointers */
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	/* set the size of the hash table */
	h_table->size = size;

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
	{
		h_table->array[i] = NULL;
	}

	return (h_table);
}

