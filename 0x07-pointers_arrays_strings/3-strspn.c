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
	if (c == '\0')
		return (s + iter);
	return (NULL);
}
/**
 * _strspn - find the nunber of matching characters from the beginning
 * @s: stribng to find
 * @accept: from where to find the match
 * Return: number of match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
		return (len);
	while (*s && _strchr(accept, *s++))
		len++;
	return (len);
}
