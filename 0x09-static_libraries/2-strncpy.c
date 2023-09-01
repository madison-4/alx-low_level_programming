#include "main.h"
/**
 * _strncpy - copy src o dest but at most n bytes or chars
 * @dest: destinations tring
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int iter = 0;

	while ((iter < n) && (src[iter] != '\0'))
	{
		dest[iter] = src[iter];
		iter++;
	}
	while (iter < n)
	{
		dest[iter] = '\0';
		iter++;
	}
	return (dest);
}
