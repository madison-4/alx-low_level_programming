#include "main.h"
/**
 * _strpbrk - find a set of bytes in accept that match the first argument
 * @s: string to be scanned
 * @accept: struing with chars to match
 * Return: pointer to first char in s that ciontains accept
 */
char *_strpbrk(char *s, char *accept)
{
	int iter;

	while (*s)
	{
		iter = 0;
		while (accept[iter])
		{
			if (*s == accept[iter])
				return (s);
			iter++;
		}
		s++;
	}
	return (NULL);
}
