#include "main.h"
/**
 * print_line - print a line then newline
 * @n: length of the line in unescores
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
}
