#include "main.h"
/**
 * _strspn - clone strspn function in C
 * @s: initial segment
 * @accept: string compared tpo
 * Return: number of bytes present
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, iter = 0, begin = 0;

	while (s[begin])
	{
		for (iter = 0; accept[iter] ; iter++)
		{
			if ((s[begin] == accept[iter]) || (s[begin] == (accept[iter] + 32)))
			{
				count++;
				break;
			}
		}
		begin++;
	}
	return (count);
}
