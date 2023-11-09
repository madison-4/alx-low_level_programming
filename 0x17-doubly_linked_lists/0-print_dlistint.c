#include "lists.h"
/**
 * print_dlistint - function to print all elements of a
 * doubly liked list.
 * @h: head of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *iter = h;

	while (iter)
	{
		num++;
		printf("%d\n", iter->n);
		iter = iter->next;
	}
	return (num);
}
