#include "hash_tables.h"
/**
 * shash_table_create - function to create a hash table
 * @size: size of the hash table
 * Return: pointer to new table or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (!(table))
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}
