#include "main.h"
/**
 * _strlen - get string length
 * @str: string
 * Return: length os string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * print_rev - print a string in reverse
 * @s: string
 * no return
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while ((len + 1) >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
