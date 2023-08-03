#include "main.h"
/**
 * _puts_recursion - printa  string followed by a new line
 * @s: string to be printed
 * Return: nothing (void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
