#include "hash_tables.h"

/**
 * key_index - provides the index of a key.
 * @key: key.
 * @size: the size array of the hash table.
 *
 * Return: index at which the key/value pair is stored in
 * the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	/* checks if the key is null and size is 0 */
	if (key == NULL || size == 0)
		return (0);
	/**
	 * Pass the hash to hash_djb2()
	 * index is calculate hash mod size,
	 * returns the memory location where data is stored
	 */

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
