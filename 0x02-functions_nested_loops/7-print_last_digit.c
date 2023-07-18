#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to find the last digit
 * Return: vaue of last digit
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + 48);
	return (n % 10);
}
