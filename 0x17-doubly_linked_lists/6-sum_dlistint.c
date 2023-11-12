#include "lists.h"
/**
 * sum_dlistint - get the sum of data in a linked list
 * @head: head of the list
 * Return: sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *iter = head;

	while (iter)
	{
		sum += iter->n;
		iter = iter->next;
	}
	return (sum);
}
