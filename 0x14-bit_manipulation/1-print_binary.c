#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print binary rep of number
 * Return: nio return, it's void
 */
void print_binary(unsigned long int n)
{
	int bit;

	if (!(n))
	{
		_putchar(48);
		exit(EXIT_SUCCESS);
	}
	while (n)
	{
		bit = (n & 1);
		n = n >> 1;
		_putchar(bit + 48);
	}
}
