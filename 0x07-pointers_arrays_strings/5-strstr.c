#include "main.h"
/**
 * _strstr - find a substribng in a string
 * @haystack: string to search substring in
 * @needle: substring to find
 * Return: pointer to beginning of substr or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int iter1, iter 2;

	for (iter1 = 0; haystack[iter1]; iter1++)
	{
		for (iter2 = 0; needle[iter2]; iter2++)
		{
			if (haystack[iter1 + iter2] != needle[iter2])
				break;
		}
	if (needle[iter2] == '\0')
		return (char *)haystack + iter1;
	}
	return NULL;
}
