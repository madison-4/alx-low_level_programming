#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse using re3cursion
 * @s: string to print
 * Return: nothing, no return
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
