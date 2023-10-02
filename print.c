#include "lists.h"
/**
 * print - print all elements of a singly linked list
 * @head: address of the head of the list
 * Return: No return
 */
void print(list_t **head)
{
	list_t *temp = *head;

	while (temp)
	{
		printf("%d", temp->n);
		temp = temp->next;
	}
}
