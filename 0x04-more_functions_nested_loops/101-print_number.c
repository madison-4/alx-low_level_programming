#include "main.h"
/**
 * print_number - prints a number
 * @n: number to be printed
 * Return: no return
 */
void print_number(long int n)
{
	if (n < 0)
		n *= -1;
	if (n / 10)
		print_number(n);
	_putchar((n % 10) + 48);
}
