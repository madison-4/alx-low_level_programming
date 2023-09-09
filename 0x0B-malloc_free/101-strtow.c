#include "main.h"
/**
 * _alphanumeric - checks if a char is alphanumeric
 * @c: charcter to be checked
 * Return: 1 if it is, 0 if it isn't
 */
int _alphanumeric(char c)
{
	if (((c >= 48) && (c <=57)) || ((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	return (0);
}
/**
 * strtow - splits a string to words
 * @str: passed string
 * Return: pointer to the array of split strings
 */
char **strtow(char *str)
{
	int len = 0, iter, word = 0, sent = 0;
	char **words;

	if ((str == NULL) || (str == ""))
		return (NULL);
	for (iter = 0; str[iter]; iter++)
		len++;
	words = malloc(sizeof(char) * len);
	if (words == NULL)
		return (NULL);
	for (iter = 0; str[iter]; iter++)
	{
		if (_alphanumeric(str[iter]))
		{
			while (str[iter] != ' ')
			{
				words[word][sent] = str[iter];
				iter++;
				sent++;
			}
			words[word][sent] = '\0';
			word++;
		}
	}
	return (words);
}
