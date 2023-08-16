#include "main.h"
/**
 * print_number - prints a number
 * @n: number to be printed
 * Return: no return
 */
void print_number(int n)
{
	int quotient, remainder;

	if (n < 0)
		n *= -1;
	quotient = n / 10;
	remainder = n % 10;
	if (quotient > remainder)
		print_number(n);
	else
	{
		_putchar(remainder + 48);
		return;
	}
}
