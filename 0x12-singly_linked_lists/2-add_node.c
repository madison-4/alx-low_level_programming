#include "lists.h"
/**
 * add_node - adds a node at te beginning of a list
 * @head: adddress of the head pointer
 * @str: string to be copied in the new node
 * Return: address of new node (new head) or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int length = 0;

	temp = malloc(sizeof(list_t));
	if (!(temp))
		return (NULL);
	temp->str = strdup(str);
	while (str[length])
		length++;
	if (!(temp->str))
	{
		free(temp);
		return (NULL);
	}
	temp->len = length;
	temp->next = *head;
	*head = temp;
	return (temp);
}
