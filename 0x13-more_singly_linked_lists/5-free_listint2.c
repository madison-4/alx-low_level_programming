#include "lists.h"
/**
 * free_listint2 - free a linked lists
 * @head: head of the list
 * Return: nothing, void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *iter;

	while (temp)
	{
		iter = temp->next;
		free(temp);
		temp = iter;
	}
	*head = NULL;
}
