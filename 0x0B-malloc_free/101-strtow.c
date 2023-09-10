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
 * countwords - count the number of words in a string
 * @str: string whose words are to be counted
 * Return: number of words
 */
int countwords(char *str)
{
	int count = 0, isword = 0, iter;

	for (iter = 0; str[iter]; iter++)
	{
		if (str[iter] == ' ' || str[iter] == '\t' || str[iter] == '\n')
		{
			if (isword)
			{
				count++;
				isword = 0;
			}
			else
				isword = 1;

		}
	}
	if (isword)
		count++;
	return (count);
}
/**
 * strtow - split a strimg to words
 * iter is simply an itrterator that goes thrpough the string
 * @str: string to be split
 * Return: pointer to array of split substrings
 */
char **strtow(char *str)
{
	char **words, *space;
	int iter = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = malloc(sizeof(char *) * (_strlen(str) + 1));
	if (words == NULL)
		return (NULL);
	iter = 0;
	while (*str)
	{
		space = _strchr(str, ' ');
		if (!(space))
		{
			words[iter] = str;
			str = '\0';
		}
		else
		{
			words[iter] = str;
			*space = '\0';
			str = space + 1;
			iter++;
		}
		words[iter] = NULL;
		return (words);
	}
