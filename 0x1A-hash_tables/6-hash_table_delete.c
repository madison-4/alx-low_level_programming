#include "hash_tables.h"
/**
 * hash_table_delete - function to delete a hash table
 * @ht: table to delete
 * Return: NOTHING, the function can't fail
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *temp;
	unsigned int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			temp = item->next;
			free(item->key);
			free(item->value);
			free(item);
			item = temp;
		}
	}
	free(ht->array);
	free(ht);
}
