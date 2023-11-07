#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table.
 * @ht: hash table.
 *
 * Return: no return.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hnode, *tmp;
	unsigned long int x;

	if (!ht)
		return;
	for (x = 0; x < ht->size; x++)
	{
		hnode = ht->array[x];
		while (hnode)
		{
			tmp = hnode->next;
			free(hnode->key);
			free(hnode->value);
			free(hnode);
			hnode = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
