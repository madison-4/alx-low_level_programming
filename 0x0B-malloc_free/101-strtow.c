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
				isowrd = 0;
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
	int count = countwords(str), iter, word = 0, wordlength = 0;
	int old, wordcount = 0;
	char **strings;

	strings = malloc(sizeof(char *) * count);
	if (strings == NULL)
		return (NULL);
	for (iter = 0; str[iter]; iter++)
	{
		if (str[iter] == ' ' || str[iter] == '\t' || '\n')
			continue;
		wordlength = 0;
		else
		{
			old = iter;
			while (str[iter] != ' ' || str[iter] != '\t' || str[iter] != '\n)
			{
				wordlength++;
				iter++;
			}
			strings[word] = malloc(sizeof(char) * (wordlength + 1));
			if (strings[word] = NULL)
				return (NULL);
			else
			{
				while (old < iter)
				{
					strings[word][wordcount] = str[old];
					old++;
					wordcount++;
				}
				strings[word][wordcount] = '\0';
				wordcount = 0;
			}
			word++;
		}
	}
	return (strings);
}
