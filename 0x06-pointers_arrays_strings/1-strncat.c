#include "main.h"
/**
 * _strlen - get the lengty of the string exclusing the terminating null byte
 * @str; string to find lengt
 * Return: length of the string, an int
 */
int _strlen(char *str)
{
	int iter = 0;

	while (str[iter] != '\0')
	{
		iter++;
	}
	return (iter);
}
/**
 * _strncat - concatentare two strings but only up to n chars
 * @dest: destination string to be appended
 * @src: source string to append
 * @n: number of chars (bytes) to append
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int iter = 0, lendest = _strlen(dest);

	while (src[iter] != '\0' && iter < n)
	{
		dest[lendest] = src[iter];
		lendest++;
		iter++;
	}
	return (dest);
}
