#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table.
 * @ht: hash table.
 *
 * Return: No return.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hnode, *temp;
	unsigned long int x;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		hnode = ht->array[x];
		while (hnode)
		{
			temp = hnode->next;
			free(hnode->key);
			free(hnode->value);
			free(hnode);
			hnode = temp;
		}
	}
	free(ht->array);
	free(ht);
}
