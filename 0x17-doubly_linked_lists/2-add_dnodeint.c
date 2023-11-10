#include "lists.h"
/**
 * add_dnodeint - adds a node at the neginning
 * @head: adddress of the head
 * @n: data of the new head node
 * Return: aaddress of new element, or NULL on failyre
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t) * 1);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	head->prev = new;
	*head = new;
	return (new);
}
