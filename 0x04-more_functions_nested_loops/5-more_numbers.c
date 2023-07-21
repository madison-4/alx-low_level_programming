#include "main.h"
/**
 * more_numbers - prints 0 to 9 followed  y newline
 * no arguments
 * Return: void
 */
void more_numbers(void)
{

	int i, tensdigit, onesdigit;

	for (i = 0; i <= 14; i++)
	{
		tensdigit = i / 10;
		onesdigit = i % 10;
		if (tensdigit != 0)
			_putchar(tensdigit + 48);
		_putchar(onesdigit + 48);
		_putchar(10);
	}
}
