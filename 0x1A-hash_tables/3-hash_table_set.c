#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to te hash table
 * @ht: address of the given hash table
 * @key: key to use and add to the array
 * @value: value to be used with the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *temp, *comp;
	char *key1, *value_copy;
	unsigned long int index;

	if ((ht == NULL) || (key == NULL) || (*key == '\0') || (value == NULL))
		return (0);
	item = malloc(sizeof(hash_node_t));
	value_copy = strdup(value);
	key1 = strdup(key);
	if ((value_copy == NULL) || (key1 == NULL) || (item == NULL))
	{
		free(item);
		return (0);
	}
	item->key = key1;
	item->value = value_copy;
	item->next = NULL;
	index = key_index((const unsigned char *)item->key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = item;
	else if (ht->array[index] != NULL)
	{
		comp = ht->array[index];
		if (strcmp((comp->key), key) == 0)
			comp->value = value_copy;
		else
		{
			temp = ht->array[index];
			item->next = temp;
			ht->array[index] = temp;
			return (1);
		}
	}
	return (1);
}
