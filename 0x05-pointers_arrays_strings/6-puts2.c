#include "main.h"
/**
 * _strlen - get the lengt of the string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
/**
 * puts2 - print the second character
 * @str: string to print
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
}
