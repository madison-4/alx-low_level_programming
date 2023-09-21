#include "lists.h"
/**
 * print_list - prints a linked lists
 * @h: head address
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	list_t *iter = h;
	size_t count = 0;

	while (h)
	{
		printf("[%d] ", h->len);
		if (!(h->str))
			printf("(nil)");
		else
			printf("%s",h->str);
		h = h->next;
		count++;
	}
	return (count);
}
