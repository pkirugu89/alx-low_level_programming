#include "hash_tables.h"

/**
 * key_index - provides the index key.
 * @key: key.
 * @size: size array of the hash table.
 *
 * Return: index where the key/value pair is stored in
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
	 * pass the hash to hash_djb2()
	 * index calculates hash mod size,
	 * returns the memory location where data is stored.
	 */
	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}

