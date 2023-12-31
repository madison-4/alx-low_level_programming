#include "lists.h"
/**
 * add_node_end - add a node at the end
 * @head: pointer to head pointer
 * @str: string to duplicate inside string
 * Return: address of new node or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t)), *iter = *head;
	unsigned int length = 0;

	if (!(new))
		return (NULL);
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	while (str[length])
		length++;
	new->len = length;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (iter->next)
		iter = iter->next;
	iter->next = new;
	return (new);
}
