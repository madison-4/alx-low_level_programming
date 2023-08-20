#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return: no return
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		print_number(n / 10);
		_putchar((n % 10) + '0');
		return;
	}
	else if (n > 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
		return;
	}
}
