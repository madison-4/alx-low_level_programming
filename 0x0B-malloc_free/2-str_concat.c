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
 * str_concat - concatenate two srings in a new place in memory
 * @s1: string 1
 * @s2: string 2
 * Return: newly allocated string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1), len2 = _strlen(s2), size = len1 + len2 + 1;
	int iter = 0, it = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	new = malloc((sizeof(char) * size));
	for (iter = 0; s1[iter]; iter++)
		new[iter] = s1[iter];
	while (s2[it])
	{
		new[iter] = s2[it];
		iter++;
		it++;
	}
	new[iter] = 0;
	return (new);
}
