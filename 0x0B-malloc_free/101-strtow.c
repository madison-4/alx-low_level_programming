#include "main.h"
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - find length of a word substring
 * @str: string to search
 * Return: index at the end of the word
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (str[index] && (str[index] != ' '))
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * count_words - count words within a string
 * @str: string to search
 * Return: number of words contained in str
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
 * strtow - split a string to words
 * @str: string to split
 * Return: array of char pointers to the given words
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc((words + 1) * sizeof(char *));
	if (strings == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == NULL)
		{
			while (w >= 0)
			{
				free(strings[w]);
				w--;
			}
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = 0;
	}
	strings[w] = NULL;
	return (strings);
}
