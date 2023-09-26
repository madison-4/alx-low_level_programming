#include "lists.h"
/**
 * listint_len - returns the number of elements of a linked lists
 * @h: head of the linked lists
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
