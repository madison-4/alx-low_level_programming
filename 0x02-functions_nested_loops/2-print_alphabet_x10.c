#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: no return
 * no arguments
 */
void print_alphabet_x10(void)
{
	int alphcount, count = 0;

	while (count <= 9)
	{
		alphcount = 97;
		while (alphcount <= 122)
		{
			_putchar(alphcount);
			alphcount++;
		}
		_putchar('\n');
		count++;
	}
}
