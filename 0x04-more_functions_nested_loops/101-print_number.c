#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints a number
 * @r: number to be printed
 * Return: no return
 */
void print_number(int r)
{
	int remainder, quotient;

	if (!r)
	{
		_putchar(48);
	}
	if (r == -2147483648)
	{
		_puts("-2147483648");
		exit(EXIT_SUCCESS);
	}
	else if (r < 0)
	{
		_putchar('-');
		r = -r;
	}
	remainder = r % 10;
	quotient = r / 10;
	if (quotient)
		print_number(quotient);
	_putchar(remainder + '0');
}
#include "main.h"

/**
 *_puts - this function prints a string
 * @str: string to be printed
 * Return: length of a string
 */

int _puts(char *str)
{
	int len = 0, count = 0;

	if (!str)
	{
		str = "(null)";
		count += _puts(str);
		return (count);
	}
	else
	{
		while (str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
			count++;
		}
	}
	return (count);
}
