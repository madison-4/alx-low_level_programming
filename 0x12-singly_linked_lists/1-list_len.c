#include "lists.h"
/**
 * list_len - get the length of a linked lists
 * @h: address of head
 * Return: number of elements in a lst
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *iter = h;

	while (iter)
	{
		count++;
		iter = iter->next;
	}
	return (count);
}
