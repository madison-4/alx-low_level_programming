#include "main.h"
/**
 * _strchr - locate a charactr in a string
 * @s: string to be looked into
 * @c: character to find
 * Return: first occurrence if caracter or NULL if it's not found
 */
char *_strchr(char *s, char c)
{
	int iter;

	for (iter = 0; s[iter] != '\0'; iter++)
	{
		if (s[iter] == c)
		{
			return (s + iter);
		}
	}
	return (NULL);
}
