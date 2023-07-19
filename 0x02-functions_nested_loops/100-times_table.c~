#include "main.h"
/**
 * times_table - print the 9 times tale
 * no arguments
 * no return
 */
void times_table(void)
{
	int row, column, prod;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		for (column = 1; column < 10; column++)
		{
			_putchar(',');
			_putchar(' ');
			prod = row * column;
			if (prod < 10)
				_putchar(32);
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
