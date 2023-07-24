#include "main.h"
/**
 * _strlen - gets the length of teh string
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	int length = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
/**
 * puts_half - print first half of string
 * @str: string
 */
void puts_half(char *str)
{
	int length, i;

	length = _strlen(str);
	for (i = (length / 2); str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
