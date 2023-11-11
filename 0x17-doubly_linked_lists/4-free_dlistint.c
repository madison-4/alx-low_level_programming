#include "lists.h"
/**
 * free_dlistint - free a doubly linked listsd
 * @head: head of the list
 * Return: no return, void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iter = head;

	if (iter == NULL)
		return;
	while (iter->next)
	{
		iter = iter->next;
		free(iter->prev);
	}
	free(iter);
}
