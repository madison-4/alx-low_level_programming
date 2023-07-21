#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: height of the triangle
 * Return: no return
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= size; i++)
		{
			if (i == j)
			{
				for (j = (i + 1); j <= size; j++)
				{
					_putchar(35);
				}
			}
			else
				_putchar(32);
			_putchar(10);
		}
	}
}
