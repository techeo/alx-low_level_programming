#include "hash_tables.h"

/**
 * key_index - Determines the index at which a key/value pair ought to be stored
 * @key: The key to get the index of.
 * @size: The size of the hash tables array.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
