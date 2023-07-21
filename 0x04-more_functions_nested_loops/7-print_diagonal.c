#include "main.h"
/**
 * print_diagonal - print a diagnal on the commandline
 * @n: number of times to print ackslash
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
		}
		_putchar('\n');
	}
}
