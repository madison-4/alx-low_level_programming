#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to find the last digit
 * Return: vaue of last digit
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + 48);
	if (n < 0)
		return ((n % 10) * -1);
	else
		return (n % 10);
}
