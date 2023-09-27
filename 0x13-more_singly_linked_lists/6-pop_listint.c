#include "lists.h"
/**
 * pop_listint - posps the heaedm resets it and returns its data
 * @head: address of the head
 * Return: head's data n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int rew;

	if (!head || !*head)
		return (0);
	if (*head)
	{
		rew = temp->n;
		*head = temp->next;
		free(temp);
	}
	return (rew);
}
