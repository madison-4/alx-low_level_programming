#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print binary rep of number
 * Return: no return, it's void
 */
void print_binary(unsigned long int n)
{
	int mask, i;

	if (n == 0)
	{
		putchar(48);
		exit(EXIT_SUCCESS);
	}
	mask = (8 * (sizeof(n)));
	for (i = mask; i >= 0; i--)
		putchar((n & (1 << i)) ? 49 : 48);
}
