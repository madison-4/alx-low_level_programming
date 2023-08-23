#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints a number
 * @r: number to be printed
 * No return
 */
void print_number(int r)
{
	unsigned int r = r;
	
	if (r < 0)
	{
		_putchar('-');
		r *= -1;
	}
	if (r / 10)
	{
		print_number(r / 10);
	}
	_putchar((r % 10) + 48);
}
