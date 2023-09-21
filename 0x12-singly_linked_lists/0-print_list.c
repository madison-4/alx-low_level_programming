#include "lists.h"
/**
 * print_list - prints a linked lists
 * @h: head address
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	const list_t *iter = h;
	size_t count = 0;

	while (iter)
	{
		printf("[%d] ", iter->len);
		if (!(iter->str))
			printf("(nil)");
		else
			printf("%s", iter->str);
		iter = iter->next;
		count++;
	}
	return (count);
}
