#include "main.h"
/**
 * print_times_table - print the 9 times tale
 * @n: number of tables to print
 * no return
 */
void print_times_table(int n)
{
	int row, column, prod, rem;

	if ((n < 0) || (n > 15))
		return;
	for (row = 0; row <= n; row++)
	{
		_putchar('0');
		for (column = 1; column <= n; column++)
		{
			_putchar(',');
			prod = row * column;
			if (prod < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar(32);
				_putchar(prod + 48);
			}
			else if ((prod >= 10) && (prod <= 99))
			{
				_putchar(32);
				_putchar(32);
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			else if((prod >= 100) && (prod <= 999))
			{
				_putchar(32);
				_putchar((prod / 100) + 48);
				rem = prod % 100;
				_putchar((rem / 10) + 48);
				_putchar((rem % 10) + 48);
			}
		}
	}
}
