#include "hash_tables.h"

/**
 * hash_table_get - gets the value associated with a key.
 * @ht: hash table
 * @key: key for getting the value
 *
 * Return: 1 if is successfull, 0 otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hnode = NULL;
	unsigned long int index;

	if (!ht || !key || !key[0])
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	hnode = ht->array[index];

	while (hnode)
	{
		if (!strcmp(hnode->key, key))
			return (hnode->value);

		hnode = hnode->next;
	}
	return (NULL);
}
