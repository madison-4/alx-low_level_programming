#include "lists.h"
/**
 * dlistint_len - get the number of nodes in a doubky linked lists
 * @h: head of the lists
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *iter = h;
	size_t count = 0;

	while (iter)
	{
		++count;
		iter = iter->next;
	}
	return (count);
}
