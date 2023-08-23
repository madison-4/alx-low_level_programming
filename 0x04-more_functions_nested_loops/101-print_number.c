#include "main.h"

/**
 * print_number - prints a number
 * @n: number to be printed
 * No return
 */
void print_number(int n)
{
	unsigned int r = n;

	if (n < 0)
	{
		_putchar('-');
		r *= -1;
	}
	if (r / 10)
	{
		print_number(r / 10);
	}
	_putchar((r % 10) + 48);
}
