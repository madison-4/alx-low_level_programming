#include "lists.h"
/**
 * free_listint - free a linked lists
 * @head: head of the list
 * Return: nothing, void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *iter;

	if (!(head->next))
	{
		free(head);
		exit(0);
	}
	while (temp)
	{
		iter = temp->next;
		free(temp);
		temp = iter;
	}
}
