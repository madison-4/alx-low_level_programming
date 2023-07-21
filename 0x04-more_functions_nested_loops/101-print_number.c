#include "main.h"
/**
 * print_number - prints a number
 * @n: number to be printed
 * Return: no return
 */
void print_number(int n)
{
	int digit = 0, i;
	char store[1000];

	if (n == 0)
		_putchar(48);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		store[digit++] = '0' + (n % 10);
		n /= 10;
	}
	for (i = digit - 1; i >= 0; i--)
	{
		_putchar(store[i]);
	}
}
