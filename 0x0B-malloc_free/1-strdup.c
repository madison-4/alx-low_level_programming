#include "main.h"
/**
 * _strlen - find length of a string
 * @str: string to find length of
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0, iter;

	for (iter = 0; str[iter]; iter++)
	{
		len++;
	}
	return (len);
}
/**
 * _strdup - clone strdup from stdlib
 * @str: string to be copied
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *new;
	int fill = 1 + _strlen(str), iter;


	if (!(str))
		return (NULL);
	if (fill == 0)
		return (NULL);
	new = malloc(sizeof(char) * fill);
	if (new == NULL)
		return (NULL);
	for (iter = 0; iter < fill; iter++)
	{
		new[iter] = str[iter];
	}
	return (new);
}
