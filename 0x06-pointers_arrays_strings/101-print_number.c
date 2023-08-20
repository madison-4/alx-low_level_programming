#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return: no return
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		k = n;
	}
	k /= 10;
	if (k)
		print_number(k);
	_putchar(((unsigned int) n % 10) + 48);
}
