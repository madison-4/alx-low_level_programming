#include "lists.h"
/**
 * reverse_listint - a function to reverse a linked lists
 * @head: address of the head
 * Return: newhead
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	prev = *head, current = *head;
	while (prev->next)
	{
		current = current->next->next;
		current->next = prev;
		prev = current;
	}
	(*head)->next = NULL;
	return (prev);
}
