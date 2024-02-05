#include "hash_tbles.h"
/**
 * hash_table_set - a function that adds an element to te hash table
 * @ht: address of the given hash table
 * @key: key to use and add to the array
 * @value: value to be used with the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unigned long int hash, index;

	item = malloc(sizeof(hash_node_t));
	if (!(item))
		return (0);
	item->key = key;
	item->value = value;
	item->next = NULL;
	hash = hash_djb2(key);
	index = 
}
