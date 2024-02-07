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
	char list_flag = 0;

	if (!(ht))
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		if (item == NULL)
			continue;
		if (list_flag == 1)
			printf(", ");
		while (item)
		{
			printf("\'%s\': \'%s\'", item->key, item->value);
			item = item->next;
			if (item)
				printf(", ");
		}
		list_flag = 1;
	}
	putchar('}');
	putchar('\n');
}
