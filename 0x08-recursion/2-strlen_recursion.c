#include "main.h"
/**
  * _strlen_recursion - get the length of a string recursively
  * @s: string to find length
  * Return: length of the string
  */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);
	else if (*s)
		len++;
	len += _strlen_recursion(s + 1);
	return (len);
}
