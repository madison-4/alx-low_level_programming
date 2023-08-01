#include "main.h"
/**
 * _memcpy - copies one memory area to anoter
 * @dest: where to copy to
 * @src: from where to copy
 * @n: bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iter;

	for (iter = 0; iter < n; iter++)
	{
		dest[iter] = src[iter];
	}
	return (dest);
}
