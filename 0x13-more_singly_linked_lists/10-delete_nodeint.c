#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at a particular index
 * @head: head address
 * @index: index to delete at
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp = *head;
	unsigned int count = 0;

	if ((head == NULL) || (*head == NULL))
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
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
	free(del);
	return (1);
}
