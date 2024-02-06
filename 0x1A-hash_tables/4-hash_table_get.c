#include "hash_tables.h"
/**
 * hash_table_get - return a value associated with a key
 * @ht: table to search
 * @key: key to search in
 * Return: value given or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;
	const unsigned char *key1;

	if (!(ht))
		return (NULL);
	key1 = (const unsigned char *)strdup(key);
	if (!(key))
		return (NULL);
	index = key_index((const unsigned char *)key1, ht->size);
	if (index >= ht->size)
		return (NULL);
	item = ht->array[index];
	while (item && strcmp(item->key, key) != 0)
		item = item->next;
	return ((item == NULL) ? NULL : item->value);
}
