#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at a particular index
 * @head: head of the list
 * @index: index to get node
 * Return: node at that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *iter = head;
	unsigned int i = 0;

	if (head == (NULL))
		return (NULL);
	while ((i < index) && (iter))
	{
		iter = iter->next;
		i++;
	}
	if (!(iter))
		return (NULL);
	return (iter->next);
}
