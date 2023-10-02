#include "lists.h"
/**
 * print_listint_safe - prints a linked list safely
 * @head: head of the list
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, iter;
	listint_t *store;

	while (head)
	{
		if (checkstore(*node, store))
			return (count);
		printf("%d\n",head->n);
		head = head->next;
		count++;
	}
	return (count);
}
/**
 * copyarr - copy the contents of an array
 * @former: former array to be copied
 * @current: array to copy to
 * @elem: number of elements to copy
 * Return: the new array it copied to
 */
listint_t *copyarr(listint_t *former, listint_t *current, unsigned int elem)
{
	unsigned int count = 0;

	while(count < elem)
	{
		current[count] = former[count];
		count++;
	}
	free(former);
	return (current);
}
/**
  * checkstore - check if an address is in the array
  * @node: array of pointers to check
  * @addrnode: address
  * @size: arraysize
  */
int checkstore(listint_t *node[], listint_t *addrnode, size_t size)
{
