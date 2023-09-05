#include "main.h"
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
 * _strcat - concatentaes two strings overwriting the terinating null byte
 * and adding it to teh end
 * @dest: string to append to
 * @src: string to append
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int iter = 0, lendest = _strlen(dest);

	while (src[iter] != '\0')
	{
		dest[lendest] = src[iter];
		iter++;
		lendest++;
	}
	dest[lendest + 1] = '\0';
	return (dest);
}
/**
 * str_concat - concatenate two srings in a new place in memory
 *
 * @s1: string 1
 * @s2: string 2
 * Return: newly allocated string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1), len2 = _strlen(s2), size = len1 + len2;
	char *new;

	if ((len1 == 0) && (len2 == 0))
		return (NULL);
	new = malloc(sizeof(char) * size);
	if (new == NULL)
	  return (NULL);
	s1 = _strcat(s1, s2);
	new = _strcpy(new, s1);
	return (new);
}