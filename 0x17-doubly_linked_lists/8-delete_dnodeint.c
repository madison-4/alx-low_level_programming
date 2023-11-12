#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at a particular index
 * @head: address of the head
 * @index: index to delete starting from zero
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	listint_t *del, *temp = *head;
	unsigned int count = 0;

	if ((head == NULL) || (*head == NULL))
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		(*head)->prev = NULL;
		return (1);
	}
	while ((temp) && (count < (index - 1)))
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);
	del = temp->next;
	temp->next = temp->next->next;
	temp->prev = temp->prev->prev;
	free(del);
	return (1);
}
