#include "main.h"
/**
 * set_bit - sets the bit at a given index to 1
 * @n: pointer to given integer
 * @index: index to set
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, one = 1;

	if (index >= ((sizeof(unsigned long int)) * 8))
		return (-1);
	mask = (one << index);
	(*n) |= mask;

	return (1);
}
