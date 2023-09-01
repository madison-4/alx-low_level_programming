#include "main.h"
/**
 * _puts - print a string then a newline
 * @str: string
 * no return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
