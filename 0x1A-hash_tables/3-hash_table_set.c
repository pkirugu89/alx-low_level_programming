#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table.
 * @key: hash table key.
 * @value: key value.
 *
 * Return: 1 if successfull, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hnode = NULL, *colnode = NULL;
	unsigned long int index;
	char *dupvalue = NULL, *dupkey = NULL;

	if (!ht || !(ht->array) || !key || !key[0])
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	hnode = ht->array[index];
	dup_value = strdup(value);
	if (!dup_value)
		return (0);
	
	while(hnode != NULL)
	{
		if (!strcmp(hnode->key, key))
		{
			free(hnode->value);
			hnode->value = dup_value;
			return (1);
		}
		hnode = hnode->next;
	}

	hnode = ht->array[index];

	colnode = malloc(sizeof(hash_node_t));
	if (colnode == NULL)
		return (free(dup_value), 0);

	dupkey = strdup(key);
	if (!dupkey)
		return (free(dup_value), free(colnode), 0);

	colnode->key = dupkey;
	colnode->value = dup_value;
	colnode->next = hnode;
	ht->array[index] = colnode;

	return (1);
}
