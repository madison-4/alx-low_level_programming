#include "main.h"
/**
 * _strlen_recursion - get the length of a string
 * @s: the string to find length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == 0)
		return;
	else if (*s != 0)
	{
		length += 1;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
