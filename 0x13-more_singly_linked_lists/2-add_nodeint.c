#include "lists.h"
/**
 * add_nodeint - add ode at the beginning of the list
 * @head: head of the list
 * @n: integer to add in the list
 * Return: new node address or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!(new))
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
