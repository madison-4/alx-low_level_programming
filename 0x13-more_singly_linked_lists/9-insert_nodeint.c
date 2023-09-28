#include "lists.h"
/**
 * insert_nodeint_at_index  - inserts a node to a particular index
 * @head: address of the head
 * @idx: index to add node in
 * @n: integer to ad in nde
 * Return: address of new node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		return (new);
	}
	while ((temp) && (count < (idx - 1)))
	{
		count++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	new->next = temp->next;
	temp->next = new;
	return (new);
}
