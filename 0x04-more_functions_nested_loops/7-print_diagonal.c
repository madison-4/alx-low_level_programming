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
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\');
		}
}
