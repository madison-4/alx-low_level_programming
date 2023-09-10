#include "main.h"
/**
 * _strlen - get the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0, iterator;

	for (iterator = 0; s[iterator] != '\0'; iterator++)
	{
		length++;
	}
	return (length);
}
/**
 * _strcpy - copy a string
 * @src: address o source string
 * @dest: destination address
 * Return: pointer to new address
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
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
 * strtow - split a strimg to words
 * iter is simply an itrterator that goes thrpough the string
 * @str: string to be split
 * Return: pointer to array of split substrings
 */
char **strtow(char *str)
{
	int len = _strlen(str), count = 0, iter = 0, old, index = 0, subchr = 0;
	char separators[] = " ;'.", **strings, buffer[16000];

	while (iter < len)
	{
		while(iter < len)
		{
			if (!(_strchr(separators, str[iter])))
				break;
			iter++;
		}
		old = iter;
		while (iter < len)
		{
			if (_strchr(separators, str[iter]) != NULL)
				break;
			iter++;
		}
		if (iter > old)
			count++;
	}
	strings = malloc(count * (sizeof(char *)));
	if (!(strings))
		return (NULL);
	iter = 0;
	while (iter < len)
	{
		while (iter < len)
		{
			if (_strchr(separators, str[iter]) == NULL)
				break;
			iter++;
		}
		while (iter < len)
		{
			if (!(_strchr(separators, str[iter])))
				break;
			buffer[subchr] = str[iter];
			iter++;
			subchr++;
		}
		if (subchr > 0)
		{
			buffer[subchr] = '\0';
			strings[index] = malloc(sizeof(char) * (_strlen(buffer) + 1));
			_strcpy(strings[index], buffer);
			index++;
		}
	}
	return (strings);
}
