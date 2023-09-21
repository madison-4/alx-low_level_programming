#include "lists.h"
/**
 * print_list - prints all elements of a list
 * the head pointer is passed as the argument.
 * It is assumed the tail points to NULL
 * @h: head pointer passed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temporary = h;

	while (temporary != NULL)
	{
		count += 1;
		if (temporary->str == NULL)
		{
			printf("[0] (nil)\n");
			temporary = temporary->next;
			continue;
		}
		printf("[%d]", temporary->len);
		printf(" %s\n", temporary->str);
		temporary = temporary->next;
	}
	return (count);
}
