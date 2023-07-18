#include "main.h"
/**
 * print_sign - prnt the sign of a number
 * @n: number to find sign
 * Return: 1 for positive, 0 for 0 and -1 for negative
 */
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (1);
}
