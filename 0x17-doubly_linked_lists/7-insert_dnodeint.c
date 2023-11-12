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
	new->next = NULL;
	new->prev = NULL;
	if (iter == NULL)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = iter->next;
		iter->prev = new;
		*h = new;
	}
	if (idx == 1)
	{
		new->next = iter->next;
		new->prev = iter;
		if (iter->next)
		{
			iter = iter->next;
			iter->prev = new;
		}
		return (new);
	}
	while ((iter) && (count < (idx - 1)))
	{
		iter = iter->next;
		count++;
	}
	if (iter)
	{
		new->next = iter->next;
		new->prev = iter;
		iter->next = new;
		iter = new->next;
		iter->prev = new;
	}
	else
		return (NULL);
	return (new);
}
