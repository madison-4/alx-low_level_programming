#include "main.h"
/**
 * more_numbers - prints 0 to 9 followed  y newline
 * no arguments
 * Return: void
 */
void more_numbers(void)
{

	int i, tensdigit, onesdigit, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tensdigit = j / 10;
			onesdigit = j % 10;
			if (tensdigit != 0)
				_putchar(tensdigit + 48);
			_putchar(onesdigit + 48);
		}
		_putchar(10);
	}
}
