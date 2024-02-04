#include "hash_tables.h"
/**
 * hash_table_create - function to create a has table in C
 * @size: size of the table
 * It initializes teh array to NULL
 * Return: pointer to newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (!(new))
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new->array);
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
