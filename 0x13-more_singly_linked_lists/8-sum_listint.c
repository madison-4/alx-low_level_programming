#include "lists.h"
/**
 * sum_listint - sums the data in a linked lists
 * @head: head of the list
 * Return: sum of the list elements or  if it is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
