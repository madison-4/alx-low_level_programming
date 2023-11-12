#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at a given position
 * @h: address of the head
 * @idx: position given to insert
 * @n: data of new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *iter = *h;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if ((idx == 0) || (iter == NULL))
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	while ((iter) && (count < idx))
	{
		iter = iter->next;
		count++;
	}
	if ((count + 1) == idx)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	if (iter)
	{
		new->next = iter;
		new->prev = iter->prev;
		iter->prev = new;
		iter = iter->prev;
		iter->next = new;
	}
	if (iter == NULL)
		return (NULL);
	return (new);
}
