#include "hash_tables.h"
/**
 * key_index - generate an index from a key
 * @key: the key to the table, string
 * @size: size of the hash table
 * Return: index of the array to use
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
