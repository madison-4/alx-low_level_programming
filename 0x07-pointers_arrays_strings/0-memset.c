#include "main.h"
/**
 * _memset - fill a memory area with a onstant byte
 * @s: memory address
 * @b: byte to fill
 * @n: number of bytes
 * Return: memory araes pointed by s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int iter = 0;

	for (iter = 0; iter < n; iter++)
	{
		s[iter] = b;
	}

	return (s);
}
