#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at a particular index
 * @head: address of the head
 * @index: index to delete starting from zero
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iter = *head;
	unsigned int count = 0;

	while (iter && (count < index))
	{
		iter = iter->next;
		count++;
	}
	if (!(iter))
		return (-1);
	else
	{
		if (iter->next)
			iter->next->prev = iter->prev;
		if (iter->prev)
			iter->prev->next = iter->next;
		free(iter);
		return (1);
	}
	return (1);
}
