#include "hash_tables.h"
/**
 * hash_table_print - print a hash table like a python dictionary
 * @ht: table to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;

	if (!(ht))
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		if (item == NULL)
			continue;
		while (item)
		{
			printf("\'%s\' : \'%s\'", item->key, item->value);
			item = item->next;
		}
		if (i < (ht->size - 1))
			putchar(',');
	}
	putchar('}');
	putchar('\n');
}
