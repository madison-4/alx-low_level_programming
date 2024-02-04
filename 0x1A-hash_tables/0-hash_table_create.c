#include "hash_tables.h"
/**
 * hash_table_create - function to create a has table in C
 * @size: size of the table
 * Return: pointer to newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(has_table_t));
	if (!(new))
		return (NULL);
	new->size = size;
	return (new);
}
