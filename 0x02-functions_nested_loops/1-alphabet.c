#include "main.h"
/**
 * print_alphabet - print the alphaet in lowercase
 * no argument
 * no return
 */
void print_alphabet(void)
{
	int alphcount = 97;

	while (alphcount <= 122)
	{
		_putchar(alphcount);
		alphcount++;
	}
	_putchar(10);
}
