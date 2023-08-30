#include "main.h"
/**
 * _puts_recursion - copy puts but with recursion
 * It also does not return the character count
 * @s: string to print
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar('\n');
	_puts_recursion(++s);
}
