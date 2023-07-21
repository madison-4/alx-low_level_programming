#include "main.h"
/**
 * print_square - prints a suare using #
 * @size: size of the square
 * Return: no return
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
