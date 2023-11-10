#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the neginning
 * @head: adddress of the head
 * @n: data of the new head node
 * Return: aaddress of new element, or NULL on failyre
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *iter = *head;

	new = malloc(sizeof(dlistint_t) * 1);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (iter->next)
		iter = iter->next;
	new->prev = iter;
	new->next = NULL;
	iter->next = new;
	return (new);
}
