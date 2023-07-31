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
 * _strcat - concatentaes two strings overwriting the terinating null byte
 * and adding it to teh end
 * @dest: string to append to
 * @src: string to append
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int iterator = 0, start = _strlen(dest), srclen = _strlen(src), i = 1;

	for (iterator = 0; iterator <= (srclen + 2); iterator++)
	{
		dest[start + i] = src[iterator];
		i++;
	}
	return (dest);
}
