#include "hash_tables.h"
/**
 * shash_table_create - create a hash table that is ordered
 * @size: size of the table.
 * Return: address of new table or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;
	unsigned long int i = 0;

	new = malloc(sizeof(shash_table_t));
	if ((!(new) || (size == 0)))
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (!(new->array))
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
