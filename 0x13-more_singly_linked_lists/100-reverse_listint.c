#include "lists.h"
/**
 * reverse_listint - a function to reverse a linked lists
 * @head: address of the head
 * Return: newhead
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while ((*head))
	{
		next = head->next;
		head->next = prev;
		prev = (*head);
		(*head) = next;
	}
	return (prev);
}
