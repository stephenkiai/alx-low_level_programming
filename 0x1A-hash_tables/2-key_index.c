#include "hash_tables.h"
/**
 * key_index - Gets index where a key/value pair will be stored Using
 *               the djb2 algorithm
 * @key: Key to get the index
 * @size: Size of  hash table
 *
 * Return: Index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
