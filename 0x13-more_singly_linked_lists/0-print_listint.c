#include "lists.h"
/**
 * print_listint - prints all elements of the linked lists
 * @h: head of the linked list
 * Return: number of nodes of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
