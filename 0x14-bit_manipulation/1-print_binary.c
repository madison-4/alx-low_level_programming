#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print binary rep of number
 * Return: nio return, it's void
 */
void print_binary(unsigned long int n)
{

	if (!(n))
	{
		_putchar(48);
		exit(EXIT_SUCCESS);
	}
	while (n > 0)
	{
		_putchar((n & 1) + 48);
		n >>= 1;
	}
}
