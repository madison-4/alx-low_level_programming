#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to find the last digit
 * Return: vaue of last digit
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar(lastdigit + 48);
	return (lastdigit);
}
