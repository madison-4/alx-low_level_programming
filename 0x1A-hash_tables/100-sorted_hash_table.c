#include "hash_tables.h"
/**
 * shash_table_create - function to create a hash table
 * @size: size of the hash table
 * Return: pointer to new table or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	table = malloc(shash_table_t);
	if (!(table))
		return (NULL);
}
