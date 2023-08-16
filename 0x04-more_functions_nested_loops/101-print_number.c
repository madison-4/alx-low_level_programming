#include "main.h"
/**
 * print_number - prints a number
 * @n: number to be printed
 * Return: no return
 */
void print_number(int n)
{
	int remainder, quotient;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	remainder = n % 10;
	quotient = n / 10;
	if(quotient > remainder)
		print_number(quotient);
	else
	{
		_putchar(remainder + 48);
		return;
	}
	_putchar(remainder + 48);
}
