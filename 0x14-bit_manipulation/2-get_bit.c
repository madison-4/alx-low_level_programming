#include "main.h"
/**
  * get_bit - get the bit at a given index
  * @n: given number
  * @index: index to get
  * Return: value at given index or -1 on failure
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, compvalue = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = (compvalue << index);
	return (n & mask);
}
