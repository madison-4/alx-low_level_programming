#include "main.h"
/**
 * time_table - print the 9 times tale
 * no arguments
 * no return
 */
void times_table(void)
{
	int row, column;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		for (column = 0; column < 10; column++)
		{
			_putchar(',');
			_putcar(' ');
			prod = row * column;
			if (prod < 10)
				_putchar(32);
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
	}
}
