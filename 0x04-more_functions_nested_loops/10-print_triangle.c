#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: height of the triangle
 * Return: no return
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				k = size - i;
				if (j >= k)
					_putchar(35);
				else
					_putchar(' ');
			}
			_putchar(10);
		}
	}
}
