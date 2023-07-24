#include "main.h"
/**
 * _strlen - get ength excusing null byte
 * @str: string
 * Return: length of string
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
 * rev_string - revrse a string
 * @s: string
 */
void rev_string(char *s)
{
	char temp;
	int length = _strlen(s);
	int i;

	for (i = length; i < (length / 2); i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
