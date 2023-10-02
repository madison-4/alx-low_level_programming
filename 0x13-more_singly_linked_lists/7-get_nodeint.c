#include "lists.h"
/**
 * get_nodeint_at_index - gets the node at a particular index
 * @head: head of the lists
 * @index: index to be gotten
 * Return: NULL on faiure, nide at that index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while ((temp) && (count < index))
	{
		count++;
		temp = temp->next;
	}

	return (temp ? temp : NULL);
}
